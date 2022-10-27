#include "MutantStack.hpp"
#include <vector>

int main()
{
/* 	std::vector<int> i_vector;

	i_vector.push_back(1);
	std::vector<int>::iterator i_vector_iter(i_vector.begin());
	i_vector_iter++;
	i_vector_iter++;
	std::cout << i_vector.at(0) << std::endl;
	std::cout << *i_vector_iter << std::endl; */

	MutantStack<int> m_stack;
 	m_stack.push(1);
	MutantStack<int> m_stack_cpy = m_stack;
	std::cout << m_stack.top() << std::endl;
	std::cout << m_stack_cpy.top() << std::endl;
	MutantStack<int>::iterator m_stack_iter(m_stack.begin());
	m_stack.pop();
	std::cout << *m_stack_iter << std::endl;
	return (0);
}
