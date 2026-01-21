#include <iostream>
//#include <string>
class Player {
	// public/protected/private
	// -> 접근 한정자/ 접근 제한자.
	// 접근 가능한 범위를 설정.
	public:
		//생성자 (constructor)
		//객체를 생성할 때 호출되는 특별한 함수.
		//변환형이 없고, 클래스 이름과 동일.
		Player(const char* inName) {
			// 문자열 복사.
			//name = inName; // 잘못된 예

			//1. 저장 공간 확보. -> 확보할 공간의 크기를 알아야 함.
			size_t length = strlen(inName) + 1;
			name = new char[length]; //문자열 저장 공간 확보.
			//2. 문자열 복사.
			strcpy_s(name, length, inName);	// == memcpy()
		}

		//소멸자.
		//객체가 해제될 때 실행.
		~Player() {
			//if (name != nullptr) 과 동일.
			if(name)
			{
				delete[] name;
				name = nullptr; //여기까지 할 필요는 없지만 안전하게
			}
		}
	
private:
		// 문자열을 저장할 변수.
		char* name = nullptr;

};
int main() {
	//문자열.
	//문자열은 불변성을 가짐.
	const char* testString = "Ronnie";
	std::cout << testString << "\n";

	char buffer[7] = { 'R', 'o', 'n', 'n', 'i', 'e', 0};
	std::cout << buffer << "\n";

	// 객체 기반으로 문자열 사용.
	Player player("RonnieJ");

	std::cin.get();
}