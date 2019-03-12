#pragma once

#include "concept_api_error.h"

#include <iostream>

class ApiErrorUser
{
public:
    static void use(ConceptApiError& api_error) // it can't be implemented in cpp - won't link just like template code
    {
        api_error.set_description(std::string());
        api_error.set_length(size_t());
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};
