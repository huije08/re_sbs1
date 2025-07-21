#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.

	// int positionX=10;
	// int positionY=20;
	// 
	// printf("positionX < positionY : %d\n", positionX < positionY);
	// printf("positionX > positionY : %d\n", positionX > positionY);
	// printf("positionX <= positionY : %d\n", positionX <= positionY);
	// printf("positionX >= positionY : %d\n", positionX >= positionY);
	// printf("positionX != positionY : %d\n", positionX != positionY);
	// printf("positionX == positionY : %d\n", positionX == positionY);

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	// 조건이 틀릴 떄 0이라는 값으로 반환됩니다.

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문입니다.

	//int health = 0;

	//if (health == 0)
	//{
	//	printf("xzczxc");
	//}
#pragma endregion

#pragma region else if 문
	// if문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문 입니다.

	//int level = 9;
	//
	//printf(" Your level : %d\n", level);
	//
	//if (level == 99)
	//{
	//	printf("최대레벨 입니다! \n");
	//}
	//else if (level < 99)
	//{
	//	printf("아직 최대레벨이 아닙니다.\n");
	//	printf("열심히 레벨업 해보세요!\n");
	//}
	
#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.
	//int health = 10;
	//if (health > 0)
	//{
	//	printf("alive");
	//}
	//else if (0 < health <= 10)
	//{
	//	printf("위험합니다 회복하세요");
	//}
	//else
	//{
	//	printf("dead");
	//}

#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문 입니다.

	char grade = 'B';

	switch (grade)
	{
		case 'A': printf("100~90점 입니다. \n");
			break;
		case 'B': printf("89~80점 입니다. \n");
			break;
		case 'C': printf("79~70점 입니다. \n");
			break;
		case 'D': printf("69~60점 입니다. \n");
			break;
		case 'F': printf("60점 이하 입니다. \n");
			break;

		default: printf("Exception\n");
			break;
		
	}
#pragma endregion


#pragma endregion


	return 0;
}