#include <stdio.h>
int abs(int val=5) //val의 절대값 반환 디폴트값 정의 
{
	if (val < 0) return -val;
	return val;
	//return (val < 0) ? -val : val; //위의 2문장 간략화
}
int main()
{
	int i = -1;
	printf("i = %d -> i의 절대값은 %d\n", i, abs()); //여기서 abs()값 안넣을시 5로 수행
}
//예를 들어 1/x에서 x에 0이 절대로 들어가면 안되므로 10-6승의 작은 값이라도 설정하여 에러 방지