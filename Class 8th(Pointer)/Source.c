#include <stdio.h>
#define SIZE 5



void main()
{
#pragma region 주소 연산자
	// 변수의 주소값을 반환하는 연산자입니다.

	// int data = 10;

	// printf("%p", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리 공간은 1byte의 크기로 나누어 표현합니다

#pragma endregion

#pragma region scanf_s함수
	//int x = 0;

	//scanf_s("%d", &x);

	//printf("x변수의 값 : %d\n", x);


#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	int storage = 10;

	int* pointer = &storage;

	ptintf("storage 변수의 주소값 : %p\n", &storage);
	ptintf("pointer 변수의 값 : %p\n", pointer);
	ptintf("pointer 변수의 주소 : %p\n", &pointer);

	*pointer = 99;

	ptintf("storage 변수의 값 : %d\n", storage);
	ptintf("pointer 변수가 가리키는 값 : %d\n", *pointer);

	int variable = 20;

	pointer = &variable;

	*pointer = 100;

	printf("variable변수의 값 : %d\n", variable);
	printf("pointer변수의 값 : %d\n", pointer);
	printf("pointer 변수의 값 : %d\n", variable);

#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록
	// 지정되어 있는 포인터 입니다.

	int room1 = 10;

	const int* const

#pragma endregion


}
