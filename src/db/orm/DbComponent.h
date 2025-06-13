//
// Created by piotr on 12.06.25.
//

#ifndef DBCOMPONENT_H
#define DBCOMPONENT_H
#include "databaseClient.h"
#include "db/orm/DbComponent.h"
#include "oatpp/macro/component.hpp"

namespace components {

class DbComponent {

    public:
        DbComponent()= default;


    private:
        OATPP_CREATE_COMPONENT(std::shared_ptr<components::DbComponent>, dbComponent)([this] {
            return dbComponent;

      }());

};

} // components

#endif //DBCOMPONENT_H
