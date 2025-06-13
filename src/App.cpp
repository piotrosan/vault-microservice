//
// Created by piotr on 11.06.25.
//

#include "App.h"

#include "oatpp/web/server/HttpConnectionHandler.hpp"
#include "oatpp/network/Server.hpp"
#include "oatpp/network/tcp/server/ConnectionProvider.hpp"

using namespace oatpp;

void run() {

    auto router = web::server::HttpRouter::createShared();


    // router->addController()

    /* Create HTTP connection handler with router */
    auto connectionHandler = web::server::HttpConnectionHandler::createShared(router);

    /* Create TCP connection provider */
    auto connectionProvider = network::tcp::server::ConnectionProvider::createShared(
        { "localhost",8010, oatpp::network::Address::IP_4}
        );

    /* Create server which takes provided TCP connections and passes them to HTTP connection handler */
    network::Server server(connectionProvider, connectionHandler);

    /* Print info about server port */
    OATPP_LOGd("MyApp", "Server running on port %s", connectionProvider->getProperty("port").getData());

    /* Run server */
    server.run();
}



int main() {

    /* Init oatpp Environment */
    Environment::init();

    /* Run App */
    run();

    /* Destroy oatpp Environment */
    Environment::destroy();

    return 0;

}