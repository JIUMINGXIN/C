#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void game()
{
	int q = 0;
	int w = 0;
	q = rand()%100+1;
	while(1)
	{
		printf("�������:\n");
		scanf("%d", &w);
		if (w > q)
		{
			printf("�´���\n");

		}
		else if (w < q)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�µ���\n");
			break;
		}
	}

}
void menu()
{
	printf("*******************\n");
	printf("*** 1.play 0.no ***\n");
	printf("*******************\n");
}
int main()
{
	srand(unsigned int(time(NULL)));
	int a = 0;
	do
	{
		menu();
		printf("����������:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			printf("������:\n");
			break;
		case 0:
			printf("��Ϸ����!");
			break;
		default:
			printf("��������:\n");
			break;
		}
			
	} while (a!=0);

	return 0;
}
