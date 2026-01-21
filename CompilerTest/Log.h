#pragma once
#include <iostream>

void Log(const char* message) {
	std::cout << message << "\n";
}


struct tArr {
	int* p;
	int size;
};


void InitArr(tArr* _pArr);	//Ctrl + . 하면 정의로 이동가능+ 정의생성