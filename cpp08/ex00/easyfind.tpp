#include "easyfind.hpp"

template <typename T>
int	easyfind(T t, int toBeFound)
{
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), toBeFound);
	if (it == t.end())
	{
		std::cout << "element not found, -1 returned" << std::endl;
		return (-1);
	}
	return *it;
}

template <>
int	easyfind(std::stack<int> st, int toBeFound)
{
	std::stack<int> st_cpy = st;

	while (!st_cpy.empty())
	{
		if (toBeFound == st_cpy.top())
			return (st_cpy.top());
		st_cpy.pop();
	}
	std::cout << "element not found, -1 returned" << std::endl;
	return (-1);
}

template <>
int	easyfind(std::queue<int> q, int toBeFound)
{
	std::queue<int> q_cpy = q;

	while (!q_cpy.empty())
	{
		if (toBeFound == q_cpy.front())
			return (q_cpy.front());
		q_cpy.pop();
	}
	std::cout << "element not found, -1 returned" << std::endl;
	return (-1);
}

template <>
int	easyfind(std::priority_queue<int> pq, int toBeFound)
{
	std::priority_queue<int> pq_cpy = pq;

	while (!pq_cpy.empty())
	{
		if (toBeFound == pq_cpy.top())
			return (pq_cpy.top());
		pq_cpy.pop();
	}
	std::cout << "element not found, -1 returned" << std::endl;
	return (-1);
}
