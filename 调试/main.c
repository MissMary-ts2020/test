#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i = 0;
	for (; i < 100; i++) {
		printf("%d\n", i);
	}

	system("pause");
	//debug 和 release两个版本的可执行程序编译
	return NULL;
}