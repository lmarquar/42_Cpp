#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack();
		MutantStack(const MutantStack &copy);
		
		// Destructor
		~MutantStack();
		
		// Operators
		MutantStack & operator=(const MutantStack &assign);

		// Classes
/* 		class iterator : public std::iterator<
							std::input_iterator_tag,
							T> {
				T *t;
				int n;
			public:
				explicit iterator(MutantStack<T>::iterator<std::input_iterator_tag, T> &stack_it);
				iterator& operator++();
				iterator& operator--();
				T operator*() const;
		}; */
		// std::stack<T>::container_type
		typedef typename std::stack<T>::container_type::iterator iterator;
		typename std::stack<T>::container_type::iterator begin();
		typename std::stack<T>::container_type::iterator end();

	private:
	
};

# include "MutantStack.tpp"

#endif
