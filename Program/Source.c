#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������
	// �����ϵ��� �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ�
	// 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	// int positionX=10;
	// int positionY=20;
	// 
	// printf("positionX < positionY : %d\n", positionX < positionY);
	// printf("positionX > positionY : %d\n", positionX > positionY);
	// printf("positionX <= positionY : %d\n", positionX <= positionY);
	// printf("positionX >= positionY : %d\n", positionX >= positionY);
	// printf("positionX != positionY : %d\n", positionX != positionY);
	// printf("positionX == positionY : %d\n", positionX == positionY);

	// ���� �����ڴ� ������ ���� �� 1�̶�� ������ ��ȯ�Ǹ�,
	// ������ Ʋ�� �� 0�̶�� ������ ��ȯ�˴ϴ�.

#pragma endregion

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ�
	// ��ɹ��Դϴ�.

	//int health = 0;

	//if (health == 0)
	//{
	//	printf("xzczxc");
	//}
#pragma endregion

#pragma region else if ��
	// if���� ������ Ʋ�� �� else if���� ������
	// �´ٸ� ����Ǵ� ��ɹ� �Դϴ�.

	//int level = 9;
	//
	//printf(" Your level : %d\n", level);
	//
	//if (level == 99)
	//{
	//	printf("�ִ뷹�� �Դϴ�! \n");
	//}
	//else if (level < 99)
	//{
	//	printf("���� �ִ뷹���� �ƴմϴ�.\n");
	//	printf("������ ������ �غ�����!\n");
	//}
	
#pragma endregion

#pragma region else��
	// if���� else if���� ������ �� Ʋ����
	// ����Ǵ� ��ɹ��Դϴ�.
	//int health = 10;
	//if (health > 0)
	//{
	//	printf("alive");
	//}
	//else if (0 < health <= 10)
	//{
	//	printf("�����մϴ� ȸ���ϼ���");
	//}
	//else
	//{
	//	printf("dead");
	//}

#pragma endregion

#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ� �Դϴ�.

	char grade = 'B';

	switch (grade)
	{
		case 'A': printf("100~90�� �Դϴ�. \n");
			break;
		case 'B': printf("89~80�� �Դϴ�. \n");
			break;
		case 'C': printf("79~70�� �Դϴ�. \n");
			break;
		case 'D': printf("69~60�� �Դϴ�. \n");
			break;
		case 'F': printf("60�� ���� �Դϴ�. \n");
			break;

		default: printf("Exception\n");
			break;
		
	}
#pragma endregion


#pragma endregion


	return 0;
}