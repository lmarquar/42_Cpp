#include "MutantStack.hpp"
#include <vector>
#include <algorithm>

int main()
{
	MutantStack<int> m_stack;
	MutantStack<int>::iterator m_stack_iter;

	std::vector<int> vec;
	vec.push_back(1);
	std::vector<int>::iterator vec_iter(1);

	std::cout << vec.at(0) << std::endl;
	std::cout << *vec_iter << std::endl;


	m_stack.push(1);
	MutantStack<int> m_stack_cpy = m_stack;
	std::cout << m_stack.top() << std::endl;
	std::cout << m_stack_cpy.top() << std::endl;
	m_stack.pop();
	return (0);
}
