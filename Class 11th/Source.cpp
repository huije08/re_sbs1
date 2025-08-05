﻿#include <stdio.h>
int level = 0;

int health = 5;

void render()
{
	for (int i = 0; i < health; i++)
	{
		printf("")
	}
}

int main()
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

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내부에서만 접근할 수 있으며, 
	// 함수가 종료되었을 때 메모리에서 사라지는 특징을 가지고 있는 변수입니다.
	//int x = 10;
	//
	//{
	//	int x = 20;
	//	printf("%d\n", x);
	//}
	//printf("%d\n", x);


#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 선언된 변수로 프로그램이 실행될 때
	// 메모리에 올라가게 되며, 프로그램이 종료되면 메모리
	// 에서 해제되는 변수입니다.


#pragma endregion

#pragma region 정적변수
	// 지역 변수의 특성을 사지면서 전역 변수의 특성을 가지고 변수로,
	// 단 한 번만 초기화가 이루어지며, 프로그램이 실행될 때 메모리에서 
#pragma endregion


}
