//�迭�� �̿��Ͽ� �հ� ��� ���ϴ� �ڵ�
#include <stdio.h>

int main_3(void)
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int i, sum = 0;
	double average;

	for (i = 0; i < 5; i++)
		sum += A[i];

	average = (double)sum / i;
	printf("�迭 A�� ������ ���� %d��.\n",sum);
	printf("�迭 A�� ������ ����� %4.21f�̴�.\n",average);
	return 0;
}


/*
* �ذ� ���
�ߺ��� main �Լ� �ҽ� ����

Solution Explorer ���� Source Files �� ���� ������.

main.cpp �� main.c �� �� �̻��� ���Ͽ� main(...) �� ���ǵǾ� ������,

������� �ʴ� �� ����(main.cpp ��)�� ���콺 ��Ŭ�� �� Exclude From Project �Ǵ� Delete �ϼ���.

���������� �ϳ��� main.c(�Ǵ� main.cpp)�� ������ �����մϴ�.

���ʿ��� ������Ʈ ���� �� �����

��� �޴� Build �� Clean Solution

�̾ Build �� Rebuild Solution

������ �����ִ� hello.obj ���� ��� ��������, �ߺ� ���� ���� �����ϵ˴ϴ�.

�� ������Ʈ�� �����ϱ� (��õ)

������ ���� ������Ʈ�� ���� ��

��Empty Project�� (�� ������Ʈ) ���ø��� ����

main.c �ϳ��� Add �� New Item �� C File(.c) �� �߰�

�ߺ� ���� ���� ����� ������ �� �ֽ��ϴ�.
*/