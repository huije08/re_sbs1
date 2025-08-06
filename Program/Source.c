#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//#pragma region 동적할당
//	int* pointer = malloc(4);
//
//	*pointer = 10;
//
//	printf("pointer 가리키는 값 : %d\n", *pointer);
//
//	free(pointer);
//
//	pointer = (int*)malloc(sizeof(int) * 3);
//
//	pointer[0] = 10;
//	pointer[1] = 20;
//	pointer[2] = 30;
//
//	for (int i = 0; i < 3; i++)
//	{
//		pirnt("%d\n", pointer[i]);
//	}
//
//	free(pointer);
//#pragma endregion
//
//#pragma region 허상포인터
//	int* address = (int*)malloc(sizeof(int));
//
//	*address = 100;
//
//	printf("address변수가 가리키는 값 : %d ");
//
//	free(address);
//
//
//#pragma endregion
//
//	return 0;
//}

struct Data
{
	char grade;
	int health;
	double experience;
};
int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	struct Data data;

	

	// 구조체를 선언하기 전에 구조체를 메모리 공간이
	//
	


#pragma endregion

#pragma region
	


#pragma endregion

	return 0;
}
