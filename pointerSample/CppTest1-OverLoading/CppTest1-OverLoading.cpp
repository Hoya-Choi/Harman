#include <stdio.h>
int abs(int val) //val의 절대값 반환
{
	if (val < 0) return -val;
	return val;
	//return (val < 0) ? -val : val; //위의 2문장 간략화
}
float abs(float val) //val의 절대값 반환 //위의 함수이름과 동일 이걸 오버로딩이라 함
{
	if (val < 0) return -val;
	return val;
	//return (val < 0) ? -val : val; //위의 2문장 간략화
}
int main()
{
	int i = -1;
	float a = -2.0;
	printf("i = %d -> i의 절대값은 %d\n", i, abs(i));
	printf("a = %f -> a의 절대값은 %f\n", a, abs(a));//오버로딩 확인
}
