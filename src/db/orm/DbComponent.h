//
// Created by piotr on 12.06.25.
//

#ifndef DBCOMPONENT_H
#define DBCOMPONENT_H

#include "db/MyClient.hpp"      //< User-declared DbClient
#include "oatpp-sqlite/orm.hpp"

namespace components {

class DbComponent {
public:

    /**
     * Create DbClient component.
     * SQLite is used as an example here. For other databases declaration is similar.
     */
    OATPP_CREATE_COMPONENT(std::shared_ptr<db::MyClient>, myDatabaseClient)([] {

      /* Create database-specific ConnectionProvider */
      auto connectionProvider = std::make_shared<oatpp::sqlite::ConnectionProvider>("/path/to/database.sqlite");

      /* Create database-specific Executor */
      auto executor = std::make_shared<oatpp::sqlite::Executor>(connectionProvider);

      /* Create MyClient database client */
      return std::make_shared<MyClient>(executor);

    }());
};

} // components

#endif //DBCOMPONENT_H
