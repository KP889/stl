#include "transform.hpp"

std::map<int, std::string> removeDuplicateAndTranformToMap(
    std::list<std::string>& l,
    std::deque<int>& d) {
  std::sort(d.begin(), d.end());
  l.sort([](auto a, auto b) {
    return std::lexicographical_compare(
        a.begin(), a.end(), b.begin(), b.end(),
        [](auto c1, auto c2) { return std::tolower(c1) < std::tolower(c2); });
  });
  auto it = std::unique(l.begin(), l.end());
  auto it2 = std::unique(d.begin(), d.end());
  std::map<int, std::string> result;
  auto dst1 = std::distance(it, l.begin());
  auto dst2 = std::distance(it2, d.begin());
  std::transform(l.begin(), it, d.begin(),
                 std::inserter(result, result.begin()),
                 [](auto s, auto i) mutable { return std::make_pair(i, s); });
  return result;
};
