#pragma once

#include "concept_wstring_container.h"

template<typename T>
concept bool ConceptWordsFrequencer =
    ConceptWstringContainer<T> &&
    requires (
        T a, 
        std::wstring word)
{
    { a.get_frequency(word) } -> double
};
