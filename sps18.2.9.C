#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a=0,b=1,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%d\n",a);
	t=a+b;
	a=b;
	b=t;
	
	}
  getch();
	return 0;
}
