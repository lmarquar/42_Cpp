#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>

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
		class iterator : public std::iterator<
							std::input_iterator_tag,
							T,
							long,
							const T*,
							T> {
				T	t;
				int	pos;
			public:
				explicit iterator(MutantStack<T>::iterator& tag = 0);
				iterator& operator++();
		};
		
	private:
		
};

# include "MutantStack.tpp"

#endif
