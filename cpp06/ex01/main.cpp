#include <string>
#include <iostream>
#include <cstdint>

struct Data
{
	int x;
} data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t uintptr = reinterpret_cast<uintptr_t>(ptr);
	return uintptr;
}

Data* deserialize(uintptr_t raw)
{
	Data* data;

	data = (Data*) raw;
	return data;
}

int main()
{
	Data *data;
	Data *ret;
	uintptr_t uintptr;

	data = new Data();
	uintptr = serialize(data);

	data->x = 5;
	uintptr = serialize(data);
	ret = deserialize(uintptr);
	std::cout << ret->x << std::endl;
	return (0);
}
