#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//F5 ��������

int add(int a, int b) {

	return a + b;
}

int main() {
	
	int i = 0;
	int arr[10] = { 0 };
	for (; i < 10; i++) {//���öϵ�
		printf("always\n");
		
		arr[i] = add(i,tan((double)i));
	}
	system("pause");
	//debug �� release�����汾�Ŀ�ִ�г������
	return NULL;
}