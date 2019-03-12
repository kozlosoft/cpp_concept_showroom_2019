#include "api_error_user.h"
#include "api_error_implementation.h"
#include "api_error_owner.h"
#include "server_user.h"
#include "server_implementation.h"
#include "concept_wstring_container.h"
#include "concept_words_frequencer.h"
#include "words_frequencer_implementation.h"

#include <iostream>
#include <vector>

int main()
{
    std::cout << "1. Concept contains method. This method has args" << std::endl;
    std::cout << "\t1.1 use that concept as method argument" << std::endl;
    ApiErrorImplementation api_error_implementation;
    ApiErrorUser::use(api_error_implementation);
    std::cout << std::endl;

    std::cout << "\t1.2 store pointer to that concept (dependency injection)" << std::endl;
    std::shared_ptr<ApiErrorImplementation> api_error_ptr;
    ApiErrorOwner api_error_owner(api_error_ptr);
    api_error_owner.use();
    std::cout << std::endl;

    std::cout << "2. Concept contains method. Args of that method are concepts as well " << std::endl;
    ServerImplementation server_implementation;
    ServerUser::use<ApiErrorImplementation>(server_implementation);
    std::cout << std::endl;

    std::cout << "3. Concept based on type-traits" << std::endl;
    auto wstring_container_user = [](const ConceptWstringContainer& container) {
        for (const std::wstring& word: container) {
            std::wcout << "\t" << word << std::endl;
        }
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    };
    std::vector<std::wstring> words = {L"My",L"name",L"is",L"Linus",L"Torvalds",L"and",L"I",L"pronounce",L"Linux",L"Linux"};
    wstring_container_user(words);
    std::cout << std::endl;

    std::cout << "4. Composition of concepts (i.e. concept includes all requirements from another concept plus own requirements)" << std::endl;
    auto words_frequncer_user = [](const ConceptWordsFrequencer& frequencer) {
        std::cout << "words frequencies:" << std::endl;
        for (const auto& word: frequencer) {
            std::wcout << "\t" << word << "=" << frequencer.get_frequency(word) << std::endl;
        }
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    };
    WordsFrequencerImplementation words_frequencer_implementation(words);
    words_frequncer_user(words_frequencer_implementation);
    std::cout << std::endl;

    return 0;
}