//���� ���� ���� ���� ���� -> ���� ���� ��, int �տ� const �����ϸ� �� ��!!!
#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 3;

	printf("���� a�� �ʱⰪ�� %d�̴�.\n", a);
	printf("���� b�� �ʱⰪ�� %d�̴�.\n", b);

	a = 10;
	b = 4;

	printf("���� a�� ���� %d�� �ٲ����.\n",a);
	printf("���� b�� ���� %d�� �ٲ����.\n",b);
	return 0;
}