#include<iostream>

class Entity
{
	public:
		Entity()
		{
			std::cout << "Constructor called\n";
		}

		~Entity() = default;

		void ShowName() const // 함수 끝에 const를 지정하면 함수 본문에서 객체 내부의 값을 변경할 수 없음. 
		{ 
			std::cout << "Entity\n";
		}

		// this 포인터: 멤버 함수가 호출된 객체 자신의 주소를 가리키는 포인터.
		const Entity* GetSelf() const // const를 붙이려면 양 끝에 붙여주어야 함. 
		{
			return this;// this는 멤버 함수가 호출된 객체 자신의 주소를 가리키는 포인터.
		}
};

int main() {
	//Entity* entity = nullptr;
	//entity->ShowName();

	//const int count = 5;
	//Entity entities[count];

	////Range-Based Loop (foreach). !참고! foreach는 순서보장은 안된다.
	//for (const Entity& entity : entities) {
	//	entity.ShowName();
	//}
	//const int count = 5;
	//Entity* entities[count] = {};
	////memset(entities, 0, sizeof(Entity*) * count);

	//for (int ix = 0; ix < count; ++ix) {
	//	entities[ix] = new Entity();
	//}

	//for (Entity*& entity : entities) {
	//	delete entity;
	//	entity = nullptr;
	//}


	// this 포인터 예제
	Entity* entity = new Entity();
	std::cout << entity << "\n";
	std::cout << entity->GetSelf() << "\n";

	delete entity;
	std::cin.get();
}
