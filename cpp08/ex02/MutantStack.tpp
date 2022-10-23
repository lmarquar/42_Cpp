#include "MutantStack.hpp"

// Constructors
template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "\e[0;33mDefault Constructor called of MutantStack\e[0m" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of MutantStack\e[0m" << std::endl;
}


// Destructor
template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "\e[0;31mDestructor called of MutantStack\e[0m" << std::endl;
}


// Operators
template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &assign)
{
	return (std::stack<T>::operator=(assign));
}

//
// SUBCLASS ITERATOR
//
//Constructors
template <typename T>
MutantStack<T>::iterator::iterator(T _t) : t(_t) {}


//Operators
template <typename T>
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator++()
{
	MutantStack<T> cpy(*this);

	while (cpy.top() && cpy.top() != t)
		cpy.pop();
	cpy.pop();
	t = cpy.top();
}


