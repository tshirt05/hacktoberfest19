#include<iostream>
using namespace std;
int main()
{
	int p,i,j,k=0;
	cin>>i;
	p=i;
	while(i!=0)
	{
		j=i%10;
	  k=k*10+j;
	  i=i/10;
	}
	cout<<k;
}
