#include<iostream>
using namespace std;
float fun_sum(int x,int &sum)
{
	int i,j,max1,max2;
	float mod;
	cout<<"enter value "<<1<<" = ";
    cin>>j;
    max1=j;
    cout<<"enter value "<<2<<" = ";
    cin>>j;
    max2=j;
	for(i=3;i<=x;i++)
	{
		cout<<"enter value "<<i<<" = ";
		cin>>j;
		if (j>max1 || j>max2)
		{
			if(j>max1 && max1<max2)
			   max1=j;
			else
			   max2=j;
    	}
	}
	sum=max1+max2;
	mod=sum/2.0;
	return (mod);
}
int main()
{
	int n,sum=0;
	float m;
	cout<<" how many values = ";
	cin>>n;
	m=fun_sum(n,sum);
	cout<<"sum = "<<sum<<endl<<"mod = "<<m;
}
