#include <stdio.h>

void main()
{
#pragma region 메모리 영역

#pragma region code 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로
	// 함수의 주소와 상수가 저장되는 영역입니다.

#pragma endregion

#pragma region Data 영역
	// 프로그램의 시작과 함께 메모리에 저장되며, 프로그램이 
	// 종료될 때 메모리가 해제되는 영역입니다.
#pragma endregion

#pragma region BSS영역
	//
#pragma endregion


#pragma region Stack영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로
	// 함수 호출시 생성되는 지역 변수와 매개 변수가 저장
	// 되는 메모리 영역입니다.
#pragma endregion

#pragma endregion


}
