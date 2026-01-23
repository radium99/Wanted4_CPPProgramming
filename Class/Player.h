#pragma once // -> 중복 include 방지 구문 (컴파일러 구문).
			// -> 순환 include는 못막음. (A <-> B 인 경우)

class Player
{
	// public/protected/private
	//공개/상속 계층까지/나만.
public: //공개한 함수(public 내 함수)를 메시지라고 부름.
	//함수를 최소로 사용하기
//Setter 내부 변수에 값을 전달하는 함수

	//생성자나 소멸자를 안만들어주면 컴파일러가 자동으로 만들어줌.
	Player() = default; //파라미터를 받지 않는 생성자 : 기본 생성자 (= default; 를 뒤에 붙이는 게 더 명시적임)
	Player(const char* inName);
	~Player() = default; //소멸자. (= default; 를 뒤에 붙이는 게 더 명시적임)
	
	inline void SetX(const int inX)
	{
		x = inX;
	}
	inline void SetY(const int inY)
	{
		y = inY;
	}
	inline void SetSpeed(const int inSpeed)
	{
		speed = inSpeed;
	}

	inline int GetX() const
	{
		return x;
	}

	void Move(int inX, int inY)
	{
		x = inX;
		y = inY;
		//SetX(x);
		//SetY(y);
	}


private:
	int x = 0;
	int y = 0;
	int speed = 0;

	//이름 값 (문자열 )
	char* name = nullptr;
};
