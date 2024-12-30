#include <string.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>
#include "ispalindrom.hpp"

int main() {
    std::string s{"Eva, can I see bees in a cave?"};

    std::cout << std::boolalpha << is_palindrome(s);
    return 0;
}
