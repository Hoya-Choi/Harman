// #include <iostream>	// C++
#include <stdio.h>
#include <malloc.h>
char buf[100];
void MemoryDump(int start, int length);		// �Լ��� proto_type | �Լ��� ����
int main(int argc, char *argv[])		// >PointerSample 10000 500 : //Comand Line ��ɾ�
// 10000 : Start memory �ּ�
// 500 : Dump �� �޸� ũ��
{
	int start = 0x09000000;
	int length = 500;
	char c = 'A';
	int i = 1;
	float a = 2.0;
	double d = 3.14;
	void *p = malloc(100);		// (void*) buf//0x80000000; // ���� �ּ��ϻ�...
	*(double *)p = d;
	MemoryDump((int)buf, length);
	//printf("c = %8c [0x08x]\n", c, &c);			// %c = �����Է�
	//printf("c = %8d [0x08x]\n", i, &i);			// %d = ������ 10������ �Է�
	//printf("c = %8f [0x08x]\n", a, &a);			// %f = float �� �Ǽ� �Է�
	//printf("c = %8f [0x08x]\n", d, &d);			// %f = float �� �Ǽ� �Է�
	//printf("c = %8f [0x08x]\n", *(double*)p, &p);
}
void MemoryDump(int start, int length)
{
	char *cp = buf;		// (char*)start;
	//void *vp = (void *)start;
	int i = 0;			// index ���� �ʱⰪ
	while (i < length)	// �������� : i < length
	{
		//char c = *cp = (char *)vp;
		//char c = *cp;
		unsigned char c = *((char *)cp + i++);
		//i++;
		printf("%02x ", c);
	}
	//for
	//do {}while
}