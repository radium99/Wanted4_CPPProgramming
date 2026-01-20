#include <iostream>

template<typename T>
void DeletePointer(T*& pointer)
{
	if (pointer != nullptr)
	{
		delete pointer;
		pointer = nullptr;
	}
}

int main()
{
	char* buffer = new char[10];
	// 포인터는 주소를 저장하는 변수.
	int* pointer = new int;
	DeletePointer(pointer);

	// null check.
	if (pointer != nullptr)
	{
		std::cout << "Pointer is not null\n";
	}
	else
	{
		std::cout << "Pointer is null\n";
	}

	// 의미는 없음.
	std::cin.get();
}