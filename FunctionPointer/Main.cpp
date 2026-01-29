#include <iostream>


using Adder = int (*)(int a, int b);
//typedef int (*Adder)(int a, int b);

//
int Function(int a, int b, Adder adder)
{
	return adder(a, b);
}

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	// 함수 포인터 선언
	//int(*FunctionPointer)();
	//FunctionPointer = Function;
	// 함수 포인터를 통한 간접 호출.
	//std::cout << FunctionPointer() << "\n";
	
	
	std::cout << Function(10, 20, Add) << "\n";
	
	
	std::cin.get();
}