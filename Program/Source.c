#include <stdio.h>

int main()
{
#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0또는 1의 조합으로 
	// 논리 계산을 수행하는 단위입니다.

#pragma region  (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1일 될 때까지 계속 2로 나누어 준다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.



	// 23 -> 10111

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다

#pragma region AND 연산자
	//int x1 = 10; // 0000 1010
	//int x2 = 6;  // 0000 0110



	//printf("x1 + x2 = %d", x1 & x2);


#pragma endregion

#pragma region OR 연산자
	// 두개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자 입니다.

	// int x1 = 8;
	// int x2 = 12;
	
	// printf("x1 + x2 = %d", x1 | x2);
#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
	// 1을 반환하는 연산자 입니다

	//int x1 = 6;
	//int x2 = 15;

	//printf("x1 ^ x2 = %d", x1 ^ x2);
#pragma endregion

#pragma region NOT 연산자
	// 하나의 비트를 반전시키는 연산자 입니다.

	// int x1 = 13;
	
	// printf("~x1 = %d", ~x1);

	// 첫 번째 비트는 부호를 나타내며, 첫번째 비트에
#pragma endregion


#pragma endregion


#pragma endregion


	return 0;
}