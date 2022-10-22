#include "Span.hpp"

template <typename Iterator>
void Span::addIterator(Iterator it, unsigned length)
{
	unsigned i;
	unsigned it_pos;

	i = _endOfArr;
	it_pos = 0;
	while (i < _N && it_pos < length)
	{
		_arr[i++] = *it;
		it++;
		_endOfArr++;
		it_pos++;
		if (i == _N && it_pos < length)
			throw (SpanOverflowException());
	}
}
