#include "Entity.h"
#include "../Vector.h"
#include <iostream>

Entity::Entity(int x, int y) {
	position = new Vector();
	position->x = x;
	position->y = y;
}

Entity::Entity(const Entity& other)
{	//기본 복사 생성자가 하는 일. 값 복사
	std::cout << "copy constructor called\n";
	//position = other.position;//나중에 댕글링 포인터 문제(주인을 잃어버리는 문제가 발생할 수 있음.
								//이를 해결하기 위해 깊은 복사(deep copy)를 해야함.
								// -> 이미 삭제된 메모리 주소에 접근하려고 할 수 있음.
									//따라서 새로운 메모리를 할당하고 값을 복사해야함.

	//깊은 복사(deep copy): 별도의 힙을 마련하여 값 복사함
	//공간 확보.
	position = new Vector();
	position->x = other.position->x;
	position->y = other.position->y;

	//값 복사.

}

Entity::~Entity()
{
	if (position) {
	delete position;
	position = nullptr;
	}
}