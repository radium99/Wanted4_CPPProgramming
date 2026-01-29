#include <iostream>
#include "Player.h"

int main()
{
	Player player(3, 200, 30.0f);
	player.Serialize("PlayerData.txt");

	// 문자열 입출력.
	int score = 100;
	float pi = 3.141592f;

	char formatString[256] = {};
	sprintf_s(formatString,
		256,
		"score=%d pi=%f",
		score,
		pi
	);

	int intValue = 0;
	float floatValue = 0.0f;
	sscanf_s(formatString,
		"score=%d pi=%f",
		&intValue,
		&floatValue
	);

	FILE* file = nullptr; // FILE:  파일 디스크립터(파일을 가르키는 포인터)
	fopen_s(&file, "Test.txt", "rb"); // 열었으면? wt:쓰기모드, rt:읽기모드, rb: ㄱ

	//파일 읽기 실패한 경우.
	if (file == nullptr)
	{
		std::cout << "Failed to read file \n";
		__debugbreak();
	}
	//fclose(file);					// 꼭 닫아주기!

	// 파일 크기 가늠.
	fseek(file, 0, SEEK_END);
	size_t fileSize = ftell(file);
	std::cout << "FileSize:  "<<fileSize<< "\n";

	//파일 크기 가늠한 뒤에 다시 처음부터 읽으려면 FP 되돌려야 함.
	//fseek(file, 0, SEEK_SET);
	rewind(file);

	
	//블록 단위로 읽기.
	// 읽은 데이터를 저장하기 위한 공간.
	char buffer[1024] = {};
	size_t readSize = fread(buffer, sizeof(char), 1024, file);

	std::cout << "readSize: " << readSize << "\n";
	std::cout << buffer;


	//파일 쓰기
	//const char* message = "프로그램에서 작성한 문자열 값입니다.";//한국어처리할 때는 fputs()가아닌 운영체제 함수를 사용한다. (wchar이기 때문에 파싱과정에서 문제가 있음)
	//fputs(message, file);

	fclose(file);

	////파일 읽기
	//char data[256] = {}; //버퍼 한번에 최대
	//while (true)
	//{
	//	if (fgets(data, 256, file) == nullptr)
	//	{
	//		break;
	//	}
	//	std::cout << data;
	//}
	//fclose(file);


}