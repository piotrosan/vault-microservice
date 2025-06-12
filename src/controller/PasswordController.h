//
// Created by piotr on 12.06.25.
//

#ifndef PASSWORDCONTROLLER_H
#define PASSWORDCONTROLLER_H
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/web/mime/ContentMappers.hpp"
#include "oatpp/macro/codegen.hpp"

namespace modelsController {
    #include OATPP_CODEGEN_BEGIN(ApiController)
        class PasswordController : public oatpp::web::server::api::ApiController{

            public:
                PasswordController()= default;


            ENDPOINT_INFO(createUser) {
                info->summary = "Create new User";

                info->addConsumes<Object<password::Password>>("application/json");

                info->addResponse<Object<UserDto>>(Status::CODE_200, "application/json");
                info->addResponse<Object<StatusDto>>(Status::CODE_404, "application/json");
                info->addResponse<Object<StatusDto>>(Status::CODE_500, "application/json");
            }
            ENDPOINT("POST", "users", createUser, BODY_DTO(Object<UserDto>, userDto))
            {
                return createDtoResponse(Status::CODE_200, m_userService.createUser(userDto));
            }
        };

    #include OATPP_CODEGEN_END(ApiController)
} // modelsController



#endif //PASSWORDCONTROLLER_H
