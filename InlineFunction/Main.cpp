#include <iostream>


#define FORCEINLINE __forceinline

//태초의 매크로(Macro) -> 지양
//#define Square(x) ((x)*(x))

// 인라인 함수는 속도 때문에 사용한다.(용량VS속도 중 속도 최적화에 해당. 어떻게? 콜스택을 사용하지 않음)

//__forceinline : 좀더 간곡한 인라인. 그래도 컴파일상황에 따라 안될 때도 있음.
FORCEINLINE int Square(int x) {
	return x * x;
}


int main() {
	int number = Square(10);
}