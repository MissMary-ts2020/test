#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i = 0;
	int arr[10] = { 0 };
	for (; i <= 12; i++) {
		printf("always\n");
		arr[i] = 0;
	}
	system("pause");
	//debug �� release�����汾�Ŀ�ִ�г������
	return NULL;
}