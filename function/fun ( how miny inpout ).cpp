#include<iostream>
using namespace std ;
int read(int a[],int n)
{
	int i,m=0;
	cout<<"enetr value 1 = ";
	while(cin>>a[m])
	{
		m=m+1;
		cout<<"enter value = ";
	}
	return (m);
}
int max(int a[],int m)
{
	int max,i;
	max=a[0];
	for(i=1;i<=m;i++)
	{
		if(a[i]>max)
		    max=a[i];
	}
	return max;
}
int main()
{
	int n,m,s;
	int a[n];
	m=read(a,n);
	s=max(a,m);
	cout<<"vulses = "<<m<<"    max = "<<s;
}
