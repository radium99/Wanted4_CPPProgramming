#include <iostream>

void PrintString(char* string)
{
	std::cout << string << "\n";
}

class A 
{
	public:
		virtual void Test() {}

};
class B : public A
{
};

int main()
{
	const char* name = "ronnie";
	PrintString(const_cast<char*>(name));

	int number = 10;
	float floatNumber = static_cast<float>(number);

	A* a = new A();
	//B* b = static_cast<B*>(a); // 잘 알고 써야함.
	B* b = reinterpret_cast<B*>(a); //위험: static에서 안해주는 것을 형 변환 해준다. void 타입간에 형변환의 경우에만 보통 사용.(더 위험)
	B* b = dynamic_cast<B*>(a); //위험:
	
	const type_info& info = typeid(a);
	std::cout << "Type of a is " << info.name() << "\n";

	delete a;

	std::cin.get();
}