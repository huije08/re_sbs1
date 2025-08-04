#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	// int list[5];

	// list[0] = 1;
	// list[1] = 2;
	// list[2] = 3;
	// list[3] = 4;
	// list[4] = 5;

	//for (int i = 0; i < 5; i++)
	//{
	//
	//	list[i] = (i + 1) * 10;
	//	printf("lisst[%d] = %d ",i, list[i]);
	//
	//}

	// 배열의 첫 번째 원소는 0부터 시작합니다

	// int array[] = { 10, 20, 30, 40, 50 };
	// 
	// int size = sizeof(array) / sizepf(array[0]);
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("array[%d]값 : %d\n", i, array[i]);
	// }
	// 
	// printf("배열의 시작주소 : %p\n", array);
	// 
	// int* pointer = &array[0];
	// 
	// pointer = pointer + 1;
	// 
	// *pointer = 25;
	// 	
	// printf("pointer 변수의값 : %p\n", pointer);
	// printf("array[%d]의 주소 : %d\n", 1, array[1]);
	// 
	// printf("array[%d]의 값 : %d\n", 1, array[1]);

#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의
	// 집합입니다.

	// const char* message = "packet";

	// *message = 'e';

	// printf("message의 값 : %p\n", message);
	// printf("message[3]의 값 : %c\n", message[3]);
	// printf("message가 가리키는 문자열 : %s\n", message);
	// 
	// message = "bit";
	// 
	// printf("message의 값 : %p\n", message);
	// printf("message가 가리키는 문자열 : %s\n", message);
	// 
	// char title[] = "League of Legend";
	// 
	// printf("title의 값 : %s\n", title);



#pragma endregion

#pragma region (2)차원배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	int array2D[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", array2D[i][j]);
		}
		printf("\n");
	}
#pragma endregion

}
