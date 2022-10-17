#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

class Base
{
	public: virtual ~Base() {};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void)
{
	int i;
	Base *ret;
	
	srand((unsigned)time(NULL));
	i = rand() % 3;
	switch (i)
	{
		case 0 : ret = new A(); break;
		case 1 : ret = new B(); break;
		case 2 : ret = new C(); break;
	}
	return (ret);
}

void identify(Base* p)
{
	Base *res;

	res = dynamic_cast<A*>(p);
	if (res != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	res = dynamic_cast<B*>(p);
	if (res != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	res = dynamic_cast<C*>(p);
	if (res != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try
	{
		A &resA = dynamic_cast<A&>(p);
		(void) resA;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &bc){}
	try
	{
		B &resB = dynamic_cast<B&>(p);
		(void) resB;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &bc){}
	try
	{
		C &resC = dynamic_cast<C&>(p);
		(void) resC;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &bc){}
}

int main()
{
	Base *b;

	b = generate();
	Base &bref = *b;
	identify(bref);
	identify(b);
}