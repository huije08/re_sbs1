#include <stdio.h>

void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ 
	// �Ѿ ������ �����ϴ� �����Դϴ�.

	// �����÷ο� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�, 
	// �Ǽ��� �� �����÷ο찡 �߻��ϸ� infinity��� ������ ��µ˴ϴ�.

#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ 
	// �Ѿ ������ �����ϴ� �����Դϴ�.

	//char data = -128 - 1;



	// ����÷ο�� ��ȣ���� �ڷ��������� �Ȱ��� �߻��ϸ�, 
	// �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ������ ��µ˴ϴ�.
#pragma endregion

#pragma region ��ȣ ���� �ڷ���
	unsigned int count = 4294967295;


	printf("%d \n", count);


	printf("%u \n", count);
#pragma endregion


	return 0;
}