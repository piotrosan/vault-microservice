#ifndef QUERY_H
#define QUERY_H
#define OATPP_COMPONENT(TYPE, ...)
#include <iostream>
#include "statement.h"
#include "oatpp/orm/SchemaMigration.hpp"
#include "oatpp/orm/DbClient.hpp"
#include "oatpp/macro/codegen.hpp"

using namespace  std;

namespace statement {


        #include OATPP_CODEGEN_BEGIN(DbClient)
            class Query: Statement{

            public:
                QUERY(createUser,
                      "INSERT INTO users (username, email, role) VALUES (:username, :email, :role);",
                      PARAM(oatpp::String, username),
                      PARAM(oatpp::String, email),
                      PARAM(oatpp::Enum<UserRoles>::AsString, role))

                QUERY(getUserByName,
                      "SELECT * FROM users WHERE username=:username;",
                      PARAM(oatpp::String, username))
            };
        #include OATPP_CODEGEN_END(DbClient)
}


#endif //QUERY_H
