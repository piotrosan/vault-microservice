//
// Created by piotr on 12.06.25.
//

#ifndef CONFIGURATIONCONTROLLER_H
#define CONFIGURATIONCONTROLLER_H
#include <oatpp/codegen/DTO_undef.hpp>

#include "models/ConfigurationDto.h"
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/web/mime/ContentMappers.hpp"
#include "oatpp/macro/codegen.hpp"

using namespace modelsDto;

namespace modelsController {
#include OATPP_CODEGEN_BEGIN(ApiController)
    class ConfigurationController : public oatpp::web::server::api::ApiController{

    public:
        ConfigurationController()= default;


        ENDPOINT_INFO(createUser) {
            info->summary = "Create new User";

            info->addConsumes<Object<ConfigurationDto>>("application/json");

            info->addResponse<Object<ConfigurationDto>>(Status::CODE_200, "application/json");
            info->addResponse<Object<ConfigurationDto>>(Status::CODE_404, "application/json");
            info->addResponse<Object<ConfigurationDto>>(Status::CODE_500, "application/json");
        }
        ENDPOINT("POST", "users", createUser, BODY_DTO(Object<ConfigurationDto>, configurationDto))
        {
            return createDtoResponse(Status::CODE_200, m_userService.createUser(userDto));
        }
    };

#include OATPP_CODEGEN_END(ApiController)

} // controller

#endif //CONFIGURATIONCONTROLLER_H
