#include "ispalindrom.hpp"

bool is_palindrome(std::string phraseToTest) {
  /*
  --->skopjuj znaki do vectora jesli sa z zakresu znakow drukowalnych 32-128
  --->zamien na malelitery
  ---?sprawedz czy jest lustrzanym odbiciem
  */

  std::vector<std::string> PlaceHolder(
      std::distance(phraseToTest.begin(), phraseToTest.end()));
  std::copy_if(phraseToTest.begin(), phraseToTest.end(), PlaceHolder.begin(),
               [](std::string s) {return s.c_str()[0]>32 && s.c_str()[0]<128 ? true:false;});
};