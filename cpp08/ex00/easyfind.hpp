#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>

template <typename T>
int	easyfind(T t, int toBeFound);

template <>
int	easyfind(std::stack<int> st, int toBeFound);

# include "easyfind.tpp"

#endif
