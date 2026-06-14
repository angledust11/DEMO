#include <stdio.h>

int main()
{
	int a=-123;
	int s=0;
	int temp;
	
	int flag=0;
	if(a<0)
	{
		flag=1;
		a=(-1)*a;
		printf("%d\n",a);
	}
	
	while(a>0)
	{
	temp=a%10;
	s=10*s+temp;
	a=a/10;
	}
	
	if(flag==1)
	{
		s=s*(-1);
	}
	printf("%d",s);
}
