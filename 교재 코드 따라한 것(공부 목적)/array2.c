//배열을 이용하여 합과 평균 구하는 코드
#include <stdio.h>

int main_3(void)
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int i, sum = 0;
	double average;

	for (i = 0; i < 5; i++)
		sum += A[i];

	average = (double)sum / i;
	printf("배열 A의 원소의 합은 %d다.\n",sum);
	printf("배열 A의 원소의 평균은 %4.21f이다.\n",average);
	return 0;
}


/*
* 해결 방법
중복된 main 함수 소스 제거

Solution Explorer 에서 Source Files 를 펼쳐 보세요.

main.cpp 와 main.c 등 둘 이상의 파일에 main(...) 이 정의되어 있으면,

사용하지 않는 쪽 파일(main.cpp 등)을 마우스 우클릭 → Exclude From Project 또는 Delete 하세요.

최종적으로 하나의 main.c(또는 main.cpp)만 남도록 정리합니다.

불필요한 오브젝트 삭제 후 재빌드

상단 메뉴 Build → Clean Solution

이어서 Build → Rebuild Solution

기존에 남아있던 hello.obj 등이 모두 지워지고, 중복 없이 새로 컴파일됩니다.

빈 프로젝트로 시작하기 (추천)

앞으로 새로 프로젝트를 만들 땐

“Empty Project” (빈 프로젝트) 템플릿을 선택

main.c 하나만 Add → New Item → C File(.c) 로 추가

중복 파일 없이 깔끔히 관리할 수 있습니다.
*/