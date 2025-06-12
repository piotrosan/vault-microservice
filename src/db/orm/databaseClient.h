//
// Created by piotr on 26.05.25.
//

#ifndef DATABASECLIENT_H
#define DATABASECLIENT_H

#include "oatpp/orm/SchemaMigration.hpp"
#include "oatpp/orm/DbClient.hpp"
#include "oatpp/macro/codegen.hpp"

namespace orm {
    namespace client {

    #include OATPP_CODEGEN_BEGIN(DbClient)
        class ClientDatabase {

        public:
            ClientDatabase(const std::shared_ptr<oatpp::orm::Executor>& executo) {

            }
        };

    }

    #include OATPP_CODEGEN_END(DbClient)

}



#endif //DATABASECLIENT_H
