#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class WordsFrequencerImplementation : public std::vector<std::wstring> // I know that this inheritance is insane. 
{
public:
    WordsFrequencerImplementation(std::vector<std::wstring> words)
        : std::vector<std::wstring>(words)
    {
    }

    double get_frequency(const std::wstring& word) const
    {
        size_t word_count = std::count(
            this->cbegin(),
            this->cend(),
            word
        );
        return this->size() != 0 ?  word_count / ((double)this->size()) : 0;
    }
};
