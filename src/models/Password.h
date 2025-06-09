//
// Created by piotr on 05.06.25.
//

#ifndef PASSWORD_H
#define PASSWORD_H
#include "../../oatpp_resource/test/oatpp/json/DTOMapperTest.hpp"
#include "../../oatpp_resource/test/oatpp/web/app/DTOs.hpp"


namespace password {

    #include OATPP_CODEGEN_BEGIN(DTO)

    class Password : oatpp::DTO{

        DTO_INIT(Password, oatpp::DTO);

        DTO_FIELD(oatpp::String, app);
        DTO_FIELD(oatpp::String, salt);
        DTO_FIELD(oatpp::String, saltedValue);
    };

    #include OATPP_CODEGEN_END(DTO)

} // password

#endif //PASSWORD_H
