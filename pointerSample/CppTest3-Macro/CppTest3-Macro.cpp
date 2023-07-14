#include <stdio.h>
#define	abs(val) (val < 0) ? -val : val //매크로 함수 실수,정수 다 가능

int main()
{
	int i = -1;
	float a = -2.0;
	printf("i = %d -> i의 절대값은 %d\n", i, abs(i));
	printf("a = %f -> a의 절대값은 %f\n", a, abs(a));//오버로딩 확인
}
