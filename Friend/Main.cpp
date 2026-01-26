#include<iostream>
using namespace std;

class Entity {
public:

	//friend void ShowEntity(Entity& entity); // 외부함수(ShowEntity())에 friend로 접근 권한을 줌.
	friend void ShowEntity(Entity& entity) // 외부 함수
	{
		cout << entity.x << "," << entity.y << "\n";
	}

private:
	int x = 0;
	int y = 0;
};

//Entity 정보를 출력하는 함수.
//void ShowEntity(Entity& entity) // 외부 함수
//{
//	cout << entity.x << "," << entity.y << "\n";
//}


int main() {

	Entity entity;
	ShowEntity(entity);

	cin.get();
}