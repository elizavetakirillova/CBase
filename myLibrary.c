#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int answer1;
	int answer2;
	int node;
	int *ptr1;
       	int *ptr2;

	printf("Введите размер вектора 1: ");
	scanf(" %d", &answer1);
	fflush(stdin);
	printf("Введите размер вектора 2: ");
	scanf(" %d", &answer2);
	fflush(stdin);
	
	ptr1 = (int *)malloc(answer1 * sizeof(int));
	ptr2 = (int *)malloc(answer2 * sizeof(int));

	for(int i = 0; i < answer1; i++)
	{
		printf("Введите элемент №%d", i+1);
		if(scanf(" %d", &node) == 1)
		{
			fflush(stdin);
			ptr1[i] = node;
		}
		else
		{
			printf("Ошибка");
			break;
		}
	}

        for(int i = 0; i < answer2; i++)
        {
                printf("Введите элемент №%d", i+1);
                scanf(" %d", &node);
                fflush(stdin);
                ptr2[i] = node;
        }

	int sum = 0;

	if (strlen(ptr1) <= strlen(ptr2))
	{
		int i = 0;

		for( ; i < strlen(ptr1); i++)
		{
			sum += ptr1[i] + ptr2[i];
			printf("sum ptr1[%d] + ptr2[%d] = %d\n", i, i, sum);
			//* (ptr1 + i)
		}
		for( ; i < strlen(ptr2); i++)
		{
			printf("sum 0 + ptr2[%d] = %d\n", i, ptr2[i]); //Почему не * ptr2[i]
		}
	}

	else
	{
		int i = 0;

		for( ; i < strlen(ptr2); i++)
		{
			sum += ptr1[i] + ptr2[i];
			printf("sum ptr1[%d] + ptr2[%d] = %d\n", i, i, sum);
		}
                for( ; i < strlen(ptr1); i++)
		{
			printf("sum 0 + ptr1[%d] = %d\n", i, ptr1[i]);
		}
	}

	return 0;
}	
