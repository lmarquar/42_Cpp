#include <algorithm>
#include <vector>
#include <set>
#include "easyfind.tpp"

int main()
{
/* 	std::vector<int> v;

	for (int i = 0; i <= 5; i++)
		v.push_back(i);
	std::cout << easyfind(v, 0) << std::endl; */

	std::set<int> s;
	for (int i = 0; i <= 5; i++)
		s.insert(i);
	std::cout << easyfind(s, 0) << std::endl;

	return (0);
}
