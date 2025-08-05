#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pointer = malloc(4);

	*pointer = 10;

	printf("pointer 가리키는 값 : %d\n", *pointer);


	return 0;
}
