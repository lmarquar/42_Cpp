#include "MutantStack.hpp"

int main()
{
	MutantStack<int> m_stack;

	m_stack.push(1);
	MutantStack<int> m_stack_cpy = m_stack;
	std::cout << m_stack.top() << std::endl;
	std::cout << m_stack_cpy.top() << std::endl;
	m_stack.pop();
	return (0);
}
