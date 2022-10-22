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

const char * Span::SpanCannotBeFoundException::what() const throw()
{
	return "unsatifying amount of data for calculation (array needs atleast two different values)";
}


//Functions
void Span::addNumber(int n)
{
	if (_endOfArr >= _N)
		throw (SpanOverflowException());
	_arr[_endOfArr] = n;
	_endOfArr++;
}

int Span::longestSpan() const
{
	int min;
	int max;

	if (_endOfArr < 2)
		throw (SpanCannotBeFoundException());
	min = _arr[0];
	max = min;
	for (unsigned i = 0; i < _N; i++)
		if (_arr[i] < min)
			min = _arr[i];
	for (unsigned i = 0; i < _N; i++)
		if (_arr[i] > max)
			max = _arr[i];
	return (max - min);
}

int Span::shortestSpan() const
{
	int min_span;

	if (_endOfArr < 2)
		throw (SpanCannotBeFoundException());
	min_span = 0;
	for (unsigned i = 0; i < _N; i++)
	{
		for (unsigned k = 0; k < _N; k++)
		{
			if (_arr[i] != _arr[k])
			{
				if (abs(_arr[i] - _arr[k]) < min_span || min_span == 0)
					min_span = abs(_arr[i] - _arr[k]);
			}
		}
	}
	return (min_span);
}


