#pragma once

#include <list>
#include <vector>

namespace task
{

void print_ip(const std::string &str)
{
    std::cout << str << std::endl;
}

template<typename T>
void print_ip(const std::vector<T>& vector) {
    if (vector.empty())
        return;

    if (vector.size() > 1)
        for (size_t i {0}; i < vector.size() - 1; ++i)
            std::cout << vector.at(i) << '.';

    std::cout << vector.at(vector.size() - 1) << std::endl;
}

template<typename T>
void print_ip(const std::list<T>& list) {
    if (list.empty())
        return;

    if (list.size() > 1)
        for (auto it = list.cbegin(); it != list.back(); ++it)
            std::cout << *it << '.';

    std::cout << *(list.cend() - sizeof(T)) << std::endl;
}

}