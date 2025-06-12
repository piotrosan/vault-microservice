//
// Created by piotr on 12.06.25.
//

#ifndef CONFIGURATIONDTO_H
#define CONFIGURATIONDTO_H

#include "oatpp/macro/codegen.hpp"
#include "oatpp/Types.hpp"


namespace modelsDto {

    #include OATPP_CODEGEN_BEGIN(DTO)

        class ConfigurationDto : public oatpp::DTO{
            DTO_INIT(ConfigurationDto, DTO);
            DTO_FIELD(Int32, id);
        };

    #include OATPP_CODEGEN_END(DTO)
} // models

#endif //CONFIGURATIONDTO_H
