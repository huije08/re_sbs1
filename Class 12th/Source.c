#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적할당

	int* pointer = malloc(4);

	*pointer = 10;

	printf("pointer 가리키는 값 : %d\n", *pointer);

	free(pointer);

	pointer = (int*)malloc(sizeof(int) * 3);

	pointer[0] = 10;
	pointer[1] = 20;
	pointer[2] = 30;

	for (int i = 0; i < 3; i++)
	{
		pirntf("%d\n", pointer[i]);
	}

	free(pointer);
#pragma endregion

#pragma region 허상포인터
	int* address = (int*)malloc(sizeof(int));

	*address = 100;

	printf("address변수가 가리키는 값 : %d ");

	free(address);


#pragma endregion

	return 0;
}