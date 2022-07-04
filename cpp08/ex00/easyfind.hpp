#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <cstddef>

template <typename T>
typename T::iterator    easyfind(T &tab, int n)
{
    typename T::iterator it;
    it = std::find(tab.begin(), tab.end(), n);
    return it;
}

#endif