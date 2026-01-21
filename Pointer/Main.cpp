#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifdef _DEBUG
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif

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

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//_CrtSetBreakAlloc(18);

	// todo: 메모리 릭 일부러.
	int* intPointer = new int[10];
	delete intPointer;
	//동적할당
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