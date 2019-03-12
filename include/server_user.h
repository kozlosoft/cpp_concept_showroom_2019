#pragma once

#include "concept_api_error.h"
#include "concept_server.h"

class ServerUser
{
public:
    template<ConceptApiError ErrorT>
    static void use(ConceptServer<ErrorT>& server)
    {
        ErrorT error;
        server.handle_error(error);
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};
