#include <stdio.h>
#define SIZE 5

#pragma region 전처리기

#pragma endregion


void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어질 때 기존에 지정했던 자료형을 다른 자료형
	// 으로 변환하는 과정입니다.

#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 
	// 크기가 더 큰 자료형으로 변환되는 과정입니다.

	// int integer = 10;
	// float decimal = 5.5f;
	// 
	// float storage = integer + decimal;
	// 
	// printf("%f\n", storage);

	// 표현 범위가 작은 데이터에 표현범위가 큰 데이터를 
	// 저장하게 되면 암묵적으로 데이터 손실이 발생합니다.


#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을

	// int x1 = 10;
	// int x2 = 3;
	// 
	// float storage1 = x1 + x2;
	// 
	// float storage2 = (float)x1 / x2;
	// 
	// printf("%f\n", storage1);
	// printf("%f\n", storage2);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과가
	// 값만 가질 수 있습니다.
#pragma endregion

#pragma endregion

#pragma region 단축 평가 계산
	// 계산을 진행하는 도중에 결과가 이미 확정된 경우
	// 

	//int x = 0;
	//int y = 0;
	//
	//if (x != 0 && y++)
	//{
	//	printf("short circuit\n");
	//}
	//
	//if (x == 0 || y++)
	//{
	//	printf("first or operator\n");
	//}
	//
	//if (x != 0 || y++)
	//{
	//	printf("second or operator\n");
	//}
	//
	//printf("y = %d", y);

#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고
	// 처리되는 과정입니다.

	// printf("매크로 SIZE의 값 : %d\n", SIZE);
#pragma endregion


#pragma region 전처리기
	// 프로그램이 컴파일 되기 이전에 프로그램에 대한
	// 사전 처리를 하는 과정입니다.

	//printf("");
#pragma endregion


}
