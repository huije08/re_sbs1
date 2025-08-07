#include <stdio.h>
#include <stdlib.h>


struct Data
{
	char grade;
	int health;
	double experience;
};

struct Point2D
{
	int x;
	int y;
};

struct Node
{
	int data;
	struct Node* next;
	
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	struct Data data;

	

	// 구조체를 선언하기 전에 구조체를 메모리 공간입니다.

#pragma endregion

#pragma region 두 점 사이의 거리

	struct Point2D rogue = { 0, 0 };
	struct Point2D slime = { 5, 3 };
	
	double x = rogue.x - slime.x;
	double y = rogue.y - slime.y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	if (distance >= 5.0)
	{
		printf("It is safe\n");
	}
	else
	{
		printf("target is \n");
	}

#pragma endregion


#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에 
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	struct Data Packet = { 'A', 10, 17.5 };

	printf("Data 구조체의 크기 : %u\n", sizeof(Packet));

	struct Ability ability = { 'A', 13.325, 5 };
	printf("Ability 구조체의 크기  : %d\n", sizeof(ability));

#pragma endregion

#pragma region 자기 참조 구조체

	struct Node node1 = { 10, NULL };



#pragma endregion


	return 0;
}
