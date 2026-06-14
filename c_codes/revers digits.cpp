#include <stdio.h>

int main()
{
	int a=123;
	int s=0;
	int temp;
	while(a>0){
	temp=a%10;
	s=10*s+temp;
	a=a/10;
	}
	printf("%d",s);
}
