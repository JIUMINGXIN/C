#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


int main()
	{
	
	/*int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("Å¼Êý");
	else if (a % 2 != 0)
		printf("ÆæÊý");*/

	//int i = 1;
	//while (i <= 100)
	//{
	//	printf("%d", i);
	//		i += 2;

	//}
	
		int n = 5;/*3.2*/
		int m = 3;
	switch (n)
	{
		
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (m)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		default:
			n--;
			m--;
		}
		
	case 4:
		m++;
		break;
		
	default:
		n++;
		m--;
		break;
	}
printf("n=%d m=%d\n", n, m);

	return 0;
	}