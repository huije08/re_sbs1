#include <stdio.h>

int main()
{
#pragma region ����
	// �����͸� ������ �� �ִ� �޸� ������ �����ϴ� ��

#pragma region �ڷ���
//�����͸� �����ϱ� ���� �������� ���¸� �����ִ� ���Դϴ�

// �ڷ����� ������ �ڷ������� ũ�Ⱑ ������ ������, �ڷ�����
// ũ��� ����Ʈ ������ �̷���� �ְ�, �ڷ����� ���� ������
// �� �ִ� ���� ������ ������ �޶����ϴ�

// char   1 byte ����
// int    4 byte ����
// float  4 byte �Ǽ�
// double 8 byte �Ǽ�
#pragma endregion

#pragma region ���� ������
	// ������ ���� ����ϱ� ���� �ڷ������� ������ ���������
	// �������ִ� ���Դϴ�.

	// ���� �������� ��� �ϳ��� ǥ�� ��� �Լ��� ���� ����
	// ������ ���� �� ������, ���� �������� ������ ���ʿ���
	// �����մϴ�.

	// ���� �����ڴ� ������ ���Ŀ� ���� ���ϴ� �����͸� �����
	// �� ������, ���İ� ������ ���°� ��ġ���� ������ ���ϴ�
	// ���� ��µ��� �ʽ��ϴ�.

	char alphabet = 'A';

	int integer = 100;

	float decimal = 36.5f;

	printf("alphabet : %c \ninteger : %d \ndecimal : %.1f", alphabet, integer, decimal);
	
	
#pragma endregion

#pragma region ������ �̸� ��Ģ
	// 1. ������ �̸��� ��ҹ��ڸ� �����մϴ�.

	// 2. ������ �̸����� ���� ����� �� �����ϴ�.
	// ex) int int;

	// 3. ������ �̸����� ������ ���Ե� �� �����ϴ�.
	// ex) floate time Delta;

	// 4. ������ �̸����� Ư�����ڴ� "_", "$"�� ����� �� �ֽ��ϴ�.

	// ex) int under_Source;
	// ex) int currentRooms$;

	// 5. ������ �̸��� ���ڷ� ������ �� �����ϴ�.
	// ex) int 5error;
	// ex) int error2022;
#pragma endregion

	int experience = 100;

	experience = 200;

	printf("experience : %d\n", experience);

	// ������ ���α׷��� ����Ǵ� 
	// ���� ������
#pragma endregion






	return 0;
}