#include<iostream>
using namespace std;
int dmj(int a[],int n,int b[],int m,int c[],int h)
{
	int i,s=0,z;
	for(i=0;i<n;i++)
	{
		c[s]=a[i];
		s=s+1;
	}
	for(i=0;i<m;i++)
	{
		c[s]=b[i];
		s=s+1;
	}
	for(i=0;i<h;i++)
	{
		cout<<"c"<<i<<" = "<<c[i]<<endl;
	}
}
int main()
{
	int n,m,i,h;
	cout<<"enter size masfofa A = ";
	cin>>n;
	cout<<"enter size masfofa B = ";
	cin>>m;
	h=n+m;
	int a[n],b[m],c[h];
	for(i=0;i<n;i++)
	{
		cout<<"enter masfofa  A"<<i<<" = ";
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		cout<<"enter masfofa B"<<i<<" = ";
		cin>>b[i];
	}
	dmj(a,n,b,m,c,h);
}


