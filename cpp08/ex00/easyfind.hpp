#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stack>
# include <queue>

template <typename T>
int	easyfind(T t, int toBeFound);

template <>
int	easyfind(std::stack<int> st, int toBeFound);

template <>
int	easyfind(std::queue<int> st, int toBeFound);

template <>
int	easyfind(std::priority_queue<int> st, int toBeFound);

# include "easyfind.tpp"

#endif
