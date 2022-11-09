#include "iostream"

typedef struct	s_Data
{
	int X;
	int Y;
}				Data;

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t res)
{
	return (reinterpret_cast<Data *>(res));
}

int main()
{
	Data data = {0, 1};

	Data *ptr = deserialize(serialize(&data));

	std::cout << ptr << " | " << &data << std::endl;
	std::cout << (ptr == &data ? "The same pointer" : "Pointers are different") << std::endl;
	std::cout << sizeof(ptr) << " | " << sizeof(&data) << std::endl;

	std::cout << "x: " << ptr->X << std::endl;
	std::cout << "y: " << ptr->Y << std::endl;
}
