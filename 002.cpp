#include<stdio.h>
int main()
{
	int i;
	for (int a=0;a<5;a++)
	{
		printf("请输入该同学的成绩:");
		scanf("%d",&i);
		getchar(); 
		if ((i<=100)&&(i>=85))
			{printf("这位同学分数等级：A\n");}
		else if ((i<=84)&&(i>=70))
			{printf("这位同学分数等级：B\n");}
		else if ((i<=69)&&(i>=60))
			{printf("这位同学分数等级：C\n");}
		else if ((i<60)||(i>100))
			{printf("请重新输入\n");break;}
	}
	return 0;
}

