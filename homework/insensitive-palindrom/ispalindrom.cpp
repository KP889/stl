#include "ispalindrom.hpp"

bool is_palindrome(std::string phraseToTest) {
  /*
  --->skopjuj znaki do vectora jesli sa z zakresu znakow drukowalnych 32-128
  --->zamien na malelitery
  ---?sprawedz czy jest lustrzanym odbiciem
  */

  std::vector<char> PlaceHolder(
      std::distance(phraseToTest.begin(), phraseToTest.end()));
   std::copy_if(phraseToTest.begin(), phraseToTest.end(), PlaceHolder.begin(),
                [](auto spell) {
                  return spell > 32 && spell< 128 ? true :false; 
                 
                });
    std::transform(PlaceHolder.begin(), PlaceHolder.end(), PlaceHolder.begin(),[](unsigned char c){return std::tolower(c);});
 
  return false;
};