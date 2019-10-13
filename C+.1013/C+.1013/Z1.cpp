#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){

	unsigned char c = 8; //0000 0100
	int j = 0;
	for (; c > 0; c -= 7){
		j++;
	}

	printf("%d\n", j);

	system("pause");
	return 0;
}