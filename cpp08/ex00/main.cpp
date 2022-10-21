#include <algorithm>
#include <vector>
#include <set>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <typeinfo>
#include "easyfind.hpp"

int main()
{
	std::cout << "Vector:" << std::endl;
	std::vector<int> v;

	for (int i = 0; i <= 5; i++)
		v.push_back(i);
	std::cout << easyfind(v, 2) << std::endl;
	std::cout << std::endl;

 	std::cout << "deque:" << std::endl;
	std::deque<int> d;
	for (int i = 0; i <= 5; i++)
		d.push_front(i);
	std::cout << easyfind(d, 5) << std::endl;
	std::cout << std::endl;

	std::cout << "list:" << std::endl;
	std::list<int> l;
	for (int i = 0; i <= 5; i++)
		l.push_front(i);
	std::cout << easyfind(l, 5) << std::endl;
	std::cout << std::endl;


	std::cout << "Stack:" << std::endl;
	std::stack<int> st;
	for (int i = 0; i <= 5; i++)
		st.push(i);
	std::cout << easyfind(st, 3) << std::endl;
	std::cout << std::endl;

	std::cout << "queue:" << std::endl;
	std::queue<int> q;
	for (int i = 0; i <= 5; i++)
		q.push(i);
	std::cout << easyfind(q, 3) << std::endl;
	std::cout << std::endl;

	std::cout << "PriorityQueue:" << std::endl;
	std::priority_queue<int> pq;
	for (int i = 0; i <= 5; i++)
		pq.push(i);
	std::cout << easyfind(pq, 3) << std::endl;
	std::cout << std::endl;

	return (0);
}
