#include <stdio.h>
#include <stdlib.h>

int main()
{
	int answer;

	printf("Введите размер массива: ");
	scanf("%d", &answer);
	
	int *ptr;
	
	ptr = (int *)malloc(answer * sizeof(int));

	return 0;
}
	
