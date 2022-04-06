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
		printf("请猜数字:\n");
		scanf("%d", &w);
		if (w > q)
		{
			printf("猜大了\n");

		}
		else if (w < q)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜到了\n");
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
		printf("请输入数字:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			printf("猜数字:\n");
			break;
		case 0:
			printf("游戏结束!");
			break;
		default:
			printf("重新输入:\n");
			break;
		}
			
	} while (a!=0);

	return 0;
}
