#include "ispalindrom.hpp"

bool is_palindrome(std::string phraseToTest) {
    std::vector<char> PlaceHolder(
        std::distance(phraseToTest.begin(), phraseToTest.end()));
    std::copy_if(phraseToTest.begin(), phraseToTest.end(), PlaceHolder.begin(),
                 [](auto spell) {
                     return (spell > 47 && spell < 58) |
                                    (spell > 64 && spell < 91) |
                                    (spell > 96 && spell < 123)
                                ? true
                                : false;
                 });

    std::transform(PlaceHolder.begin(), PlaceHolder.end(), PlaceHolder.begin(),
                   [](unsigned char c) { return std::tolower(c); });

    PlaceHolder.resize(distance(PlaceHolder.begin(),
                                find(PlaceHolder.begin(), PlaceHolder.end(), 0)));

    return std::equal(PlaceHolder.cbegin(), PlaceHolder.cend(),
                      PlaceHolder.crbegin());
};
