#include <stdio.h>

int main()
{
	while(1)
	{
		float a, b, c;
			printf("请输入三条边：\n");
			scanf("%f%f%f", &a, &b, &c);
			printf("结果：");
			if (a + b > c && b + c > a && c + a > b)
			{
				if (a == b && b == c)
				{
					printf("等边三角形\n"); 
				}
				else if (a == b || a == c || b == c)
				{
					printf("等腰三角形\n");
				}
				else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
				{
					printf("直角三角形\n");
				}
				else
				{
					printf("三角形\n");
				}
			}
			else
			{
				printf("不是三角形\n");
			}
	}
	return 0;
}