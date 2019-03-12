#pragma once

#include <string>

template<typename T>
concept bool ConceptWstringContainer = std::is_same<typename T::value_type, std::wstring>::value;
