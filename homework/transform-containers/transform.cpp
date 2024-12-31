#include "transform.hpp"

std::map<int, std::string> removeDuplicateAndTranformToMap(std::list<std::string> &l, std::deque<int> &d) {
     std::sort(d.begin(),d.end());
     std::sort(l.begin(),l.end());
    
    auto it = std::unique(l.begin(), l.end());
    auto it2 = std::unique(d.begin(), d.end());
    std::map<int, std::string> result;
    auto dst1 = std::distance(it, l.begin());
    auto dst2 = std::distance(it2, d.begin());
    // auto it3 = d.begin();
    // auto index = -1;
    // if (dst1 == dst2) {
    //  std::transform(l.begin(), l.end(), result.begin(), [it3, index](auto s) mutable {index ++; std::advance(it3,index); return std::pair(*it3,s); });
    
    std::cout << "dupa \n";
    std::copy(l.begin(), it, std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << " \n dupa2 \n";
    std::copy(d.begin(), it2, std::ostream_iterator<int>(std::cout, " "));
    std::transform(l.begin(), it, d.begin(), std::inserter(result, result.begin()), [](auto s, auto i) mutable { return std::make_pair(i, s); });
    // }

    return result;
};
