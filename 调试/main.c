#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i = 0;
	for (; i < 100; i++) {
		printf("%d\n", i);
	}

	system("pause");
	//debug �� release�����汾�Ŀ�ִ�г������
	return NULL;
}