#pragma once

#include <iostream>

class ApiErrorImplementation
{
public:
    void set_length(size_t)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void set_description(const std::string&) 
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};
