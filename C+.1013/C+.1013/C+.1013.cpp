#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main2(){
	char f[10000];
	int i;
	scanf("%c\n", &f);
	for (i = 0; i < 10000; i++){
		if (f[i] == ' '){
			f[i] = '%20';
		}
	}

	printf("%c\n", &f[10000]);


	system("pause");
	return 0;
}