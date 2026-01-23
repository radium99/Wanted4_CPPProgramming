#include "Player.h"
#include <iostream>
void Player::Move(int inX, int inY) {
	x = inX;
	y = inY;
} //A::변수 의미: A안에 있는 변수. :: 는 범위 지정 연산자.

//void Move(Player& player, int x, int y)
//{
//	player.SetX(x);
//	player.SetY(y);
//}

Player::Player(const char* inName) {
	//동적 할당 및 문자열 복사
	size_t length = strlen(inName) + 1; //널 문자 포함. strlen은 null문자 전까지의 길이 반환.
	name = new char[length];

	strcpy_s(name, length, inName);
}

Player::~Player() {
	if (name) {
		//동적 할당 해제
		delete[] name;
		name = nullptr; //안전하게
	}
}