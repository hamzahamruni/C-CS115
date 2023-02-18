#include<iostream>
using namespace std;
void read(int n,int *p)
{
	for(int i=0;i<n;i++)
	    cin>>*(p+i);
}
int zero_value(int n,int *p)
{
	int z=0;
	for(int i=0;i<n;i++)
	{
		if(*(p+i)==0)
		{
			z++;
		}
	}
	return z;
}
int main()
{
	int n;
	cout<<"enter size masfofa = ";
	cin>>n;
	int a[n],*p,zero;
	read(n,a);
	zero=zero_value(n,a);
	cout<<"values zero = "<<zero<<endl;
	
}
