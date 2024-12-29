#include "ispalindrom.hpp"
#include <algorithm>

#include <iostream>
#include <iterator>
#include <string.h>
#include <utility>
#include <vector>

int main() {
  std::string s{"Eva, can I see bees in a cave?"};

  std::cout << std::boolalpha << is_palindrome(s);
  return 0;
}
