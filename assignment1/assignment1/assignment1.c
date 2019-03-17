#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, j;
	int word;
	char array1[3000][1000];
	FILE* stream1 = fopen("dict.txt", "r");

	for (i = 0; i < 3000; i++)
	{
		for (j = 0; j < 1000; j++)
		{
			fscanf(stream1, "%c", &array1[i][j]);

			if (array1[i][j] != '()') {
				word++;
			}
		}
	}
	printf("´Ü¾î¼ö:%d", world);

	return 0;

}
