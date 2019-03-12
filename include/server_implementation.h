#pragma once

#include "api_error_implementation.h"

class ServerImplementation
{
public:
    void handle_error(ApiErrorImplementation& api_error) const
    {
        api_error.set_description(std::string());
        api_error.set_length(size_t());
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};
