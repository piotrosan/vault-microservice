//
// Created by piotr on 12.06.25.
//

#ifndef CONFIGURATIONSERVICE_H
#define CONFIGURATIONSERVICE_H

#include <oatpp/codegen/DTO_define.hpp>

#include "models/ConfigurationDto.h"
#include "oatpp/web/protocol/http/Http.hpp"
#include "oatpp/macro/component.hpp"


using namespace modelsDto;

namespace services {

class ConfigurationService {

    private:
        OATPP_COMPONENT(std::shared_ptr<ClientDatabase>, clientDatabase); // Inject database component

    public:
        oatpp::Object<ConfigurationDto> createPassword(const oatpp::Object<ConfigurationDto>& dto);
};

} // services

#endif //CONFIGURATIONSERVICE_H
