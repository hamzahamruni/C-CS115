#include<iostream>
using namespace std;
int fun_sum(int x,int &sum)
{
	int i,j,mod;
	for(i=1;i<=x;i++)
	{
		cout<<"enter value "<<i<<" = ";
		cin>>j;
		sum=sum+j;
	}
	mod=sum/x;
	return (mod);
}
int main()
{
	int s,n,sum=0,m;
	cout<<" how many values = ";
	cin>>n;
	m=fun_sum(n,sum);
	cout<<"sum = "<<sum<<endl<<"mod = "<<m;
}

