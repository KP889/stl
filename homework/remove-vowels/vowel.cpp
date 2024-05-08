#include "vowel.hpp"

void removeVowels(std::vector<std::string>& v) {
    std::vector<char> vowels{'a', 'e', 'o', 'u', 'i', 'y'};

    // for(auto v_it:v)
    for (auto& element : v) {
        for (auto x : vowels) {
            element.erase(remove(element.begin(), element.end(), x), element.end());
            x = toupper(x);
            element.erase(remove(element.begin(), element.end(), x), element.end());
        }
        // v.erase(std::remove(v.begin(),v.end(), [](){return if(std::string::npos
        // !=)})); v.push_back("uuu");
    }
}
