#include<stdio.h>
int main()
{
	int i;
	for (int a=0;a<5;a++)
	{
		printf("�������ͬѧ�ĳɼ�:");
		scanf("%d",&i);
		getchar(); 
		if ((i<=100)&&(i>=85))
			{printf("��λͬѧ�����ȼ���A\n");}
		else if ((i<=84)&&(i>=70))
			{printf("��λͬѧ�����ȼ���B\n");}
		else if ((i<=69)&&(i>=60))
			{printf("��λͬѧ�����ȼ���C\n");}
		else if ((i<60)||(i>100))
			{printf("����������\n");break;}
	}
	return 0;
}

