//
// Created by piotr on 05.06.25.
//

#ifndef PASSWORD_H
#define PASSWORD_H
#include "oatpp/macro/codegen.hpp"
#include "oatpp/Types.hpp"


namespace password {

    #include OATPP_CODEGEN_BEGIN(DTO)

    class PasswordDto : public oatpp::DTO{

        DTO_INIT(PasswordDto, DTO);

        DTO_FIELD(Int32, id);
        DTO_FIELD(String, app);
        DTO_FIELD(String, salt);
        DTO_FIELD(String, saltedValue);
    };

    #include OATPP_CODEGEN_END(DTO)

} // password

#endif //PASSWORD_H
