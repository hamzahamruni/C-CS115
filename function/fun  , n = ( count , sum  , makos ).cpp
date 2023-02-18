#include<iostream>
using namespace std;
int main()
{
	int fun_count(int X);
	int fun_sum(int S);
	int fun_makos(int F);
	void fun_tt(int f);
	int n;
	cout<<"enter n = ";
	cin>>n;
	int count=fun_count(n);
	int sum=fun_sum(n);
    int makos=fun_makos(n);
	cout<<"count = "<<count<<endl<<"sum = "<<sum<<endl<<"makos = "<<makos<<endl;
    fun_tt(n);
}
int fun_count(int X)
{
	int d,count=0;
	while(X!=0)
	{
		d=X%10;
		count=count+1;
		X=X/10;
	}
	return (count);
}
int fun_sum(int x)
{
	int sum=0,m;
	while(x!=0)
	{
	   m=x%10;
	   sum=sum+m;
	   x=x/10;
    }   
    return (sum);
}
int fun_makos(int x)
{
	int m,z=0;
	while(x!=0)
	{
		m=x%10;
		z=(z*10)+m;
		x=x/10;
		
	}
	return (z);
}
void fun_tt(int x)
{
	int n,i;
	cout<<"tt = ";
	while(x!=0)
	{
		n=x%10;
		x=x/10;
		for(i=1;i<=n;i++)
		{
			cout<<n;
		}
	    cout<<endl<<"     ";
	}
	cout<<endl;
}
