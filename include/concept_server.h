#pragma once

#include "concept_api_error.h"

template<
  typename T,
  ConceptApiError ConceptApiErrorT>
concept bool ConceptServer = 
  requires(
    T a,
    ConceptApiErrorT& error)
{
  { a.handle_error(error) } -> void;
};

