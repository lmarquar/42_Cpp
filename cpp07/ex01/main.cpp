#include <iostream>
#include "iter.hpp"

/* void increasebyone(int &i)
{
	i++;
}

int main( void ) {
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand();
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
	iter(arr, 11, &increasebyone);
	for (int i = 0; i < 10; i++)
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;

	return (0);
} */

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
