//배열 공부 -> 1차원 배열

#include <stdio.h>

int main_2(void) {
	int i;
	int a[] = { 5, 10, 15 };

	for (i = 0; i < 3; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
