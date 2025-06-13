#ifndef QUERY_H
#define QUERY_H
#define OATPP_COMPONENT(TYPE, ...)
#include <iostream>
#include "statement.h"
#include "models/ConfigurationDto.h"
#include "oatpp/orm/SchemaMigration.hpp"
#include "oatpp/orm/DbClient.hpp"
#include "oatpp/macro/codegen.hpp"

using namespace  std;

namespace statement {


        #include OATPP_CODEGEN_BEGIN(DbClient)
            class Query: Statement{

            public:

            };
        #include OATPP_CODEGEN_END(DbClient)
}


#endif //QUERY_H
