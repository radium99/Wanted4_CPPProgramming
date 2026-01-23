#include<iostream>
#include "Player.h"

Player::Player()
{
}
Player::~Player()
{
}

int main() {
	//인스턴스
	Player player1;
	//player1.SetX(5);
	//player1.SetY(2);
	//player1.SetSpeed(3);
	////Move(player1, 5, 2);
	player1.Move(5, 2);
	
	Player* player2 = new Player("Ronnie");
	player2->Move(3, 1);
	
	delete player2;	//동적 할당 해제
	player2 = nullptr; //안전하게

	std::cin.get();
}