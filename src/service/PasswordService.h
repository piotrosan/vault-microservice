//
// Created by piotr on 12.06.25.
//

#ifndef PASSWORDSERVICE_H
#define PASSWORDSERVICE_H

#include <oatpp/codegen/DTO_define.hpp>

#include "models/PasswordDto.h"
#include "oatpp/web/protocol/http/Http.hpp"
#include "oatpp/macro/component.hpp"

using namespace password;

namespace services {

class PasswordService {

    private:
        OATPP_COMPONENT(std::shared_ptr<>, m_database); // Inject database component

    public:
        oatpp::Object<PasswordDto> createPassword(const oatpp::Object<PasswordDto>& dto);
};

} // services

#endif //PASSWORDSERVICE_H
