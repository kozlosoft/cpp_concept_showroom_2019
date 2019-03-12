#pragma once

#include "concept_api_error.h"

#include <iostream>
#include <memory>

template <ConceptApiError ConceptApiErrorT>
class ApiErrorOwner 
{
    typedef std::shared_ptr<ConceptApiErrorT> ConceptApiErrorPtr;
public:
    ApiErrorOwner(ConceptApiErrorPtr api_error)
        : api_error_(api_error)
    {
    }

    void use() 
    {
        api_error_->set_description(std::string());
        api_error_->set_length(size_t());
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

private:
    ConceptApiErrorPtr api_error_;
};
