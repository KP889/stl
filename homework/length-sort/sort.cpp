#include "sort.hpp"

std::deque<std::string> lengthSort(std::forward_list<std::string> const lista) {
    std::vector<std::string> m_temp;

    for (auto element : lista) {
        m_temp.push_back(element);
    }

    auto f = [](std::string a, std::string b) {
        if (a.length() == b.length()) {
            for (size_t y = 0; y < a.length(); y++) {
                if (a[y] == b[y]) {
                    continue;
                } else {
                    return a[y] < b[y];
                };
            }
        }
        return a.length() < b.length();
    };

    sort(m_temp.begin(), m_temp.end(), f);

    // for(auto element :m_temp)d_temp.insert(element.first);
    // d_temp.insert(0,m_temp.begin());
    std::deque<std::string> d_temp(m_temp.begin(), m_temp.end());
    return d_temp;
};