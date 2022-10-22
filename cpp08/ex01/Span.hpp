#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{
	public:
		// Constructors
		Span();
		Span(const Span &copy);
		Span(unsigned N);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		
		// Getters / Setters
		int *getArr() const;
		int getArrEl(unsigned i) const;
		unsigned getN() const;
		unsigned getEndOfArr() const;
		
		// Exceptions
		class SpanOverflowException : public std::exception {
			public:
			virtual const char* what() const throw();
		};

		class SpanCannotBeFoundException : public std::exception {
			public:
			virtual const char* what() const throw();
		};

		//Functions
		void addNumber(int n);
		int shortestSpan() const;
		int longestSpan() const;
		template <typename Iterator>
		void addIterator(Iterator iterator, unsigned length);
		
	private:
		int *_arr;
		unsigned _N;
		unsigned _endOfArr;
};

#include "Span_addIter.tpp"

#endif
