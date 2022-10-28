#include "MutantStack.hpp"
#include <vector>

/* int main()
{
	std::vector<int> i_vector;

	i_vector.push_back(1);
	std::vector<int>::iterator i_vector_iter(i_vector.begin());
	i_vector_iter++;
	i_vector_iter++;
	std::cout << i_vector.at(0) << std::endl;
	std::cout << *i_vector_iter << std::endl;

	MutantStack<int> m_stack;
 	m_stack.push(1);
	MutantStack<int> m_stack_cpy = m_stack;
	std::cout << "M_stack top element:     " << m_stack.top() << std::endl;
	std::cout << "M_stack_cpy top element: " << m_stack_cpy.top() << std::endl;
	MutantStack<int>::iterator m_stack_iter(m_stack.begin());
	m_stack.pop();
	std::cout << "M_stack_iter: " << *m_stack_iter << std::endl;
	m_stack_iter++;
	std::cout << "M_stack_iter++: "  << *m_stack_iter << std::endl;
	m_stack_iter++;
	std::cout << "M_stack_iter++: "  << *m_stack_iter << std::endl;
	return (0);
} */

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
