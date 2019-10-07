#include<stdio.h>
int main()
{
	int p,i,j,k=0;
	scanf("%d",&i);
	p=i;
	while(i!=0)
	{
		j=i%10;
	  k=k*10+j;
	  i=i/10;
	}
	printf("%d",k);
}
