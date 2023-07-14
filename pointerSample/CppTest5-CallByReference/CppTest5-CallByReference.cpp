#include <stdio.h>
void swap(int &a, int &b) //call-by-reference
{
	int temp = a; //temp는 임시로 저장할 변수
	printf("a: %d, b: %d\n", a, b);
	a = b;
	printf("a: %d, b: %d\n", a, b);
	b = temp;
	printf("a: %d, b: %d\n", a, b);
}
int main()
{
	int i = -100;
	int j = 100;
	swap(i, j);
}
