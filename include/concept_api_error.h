#pragma once

#include <string>

template<typename T>
concept bool ConceptApiError = 
  requires(
    T a,
    size_t n,
    const std::string& text)
{
    { a.set_length(n) } -> void;
    { a.set_description(text) } -> void;
};
