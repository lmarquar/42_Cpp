#include "Span.hpp"

// Constructors
Span::Span()
{
	_endOfArr = 0;
	_arr = 0;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::Span(unsigned N)
{
	_endOfArr = 0;
	_N = N;
	_arr = new int[_N];
}


// Destructor
Span::~Span()
{
}


// Operators
Span & Span::operator=(const Span &assign)
{
	_endOfArr = assign.getEndOfArr();
	_N = assign.getN();
	_arr = new int[_N];
	for (unsigned i = 0; i < _N; i++)
		_arr[i] = assign.getArrEl(i);
	return *this;
}


// Getters / Setters
int *Span::getArr() const
{
	return _arr;
}

int Span::getArrEl(unsigned i) const
{
	return _arr[i];
}

unsigned Span::getN() const
{
	return _N;
}

unsigned Span::getEndOfArr() const
{
	return _endOfArr;
}

// Exceptions
const char * Span::SpanOverflowException::what() const throw()
{
	return "maximum amount of numbers already reached";
}


//Functions
void Span::addNumber(int n)
{
	if (_endOfArr >= _N - 1)
		throw (SpanOverflowException());
	_arr[_endOfArr] = n;
	_endOfArr++;
}
