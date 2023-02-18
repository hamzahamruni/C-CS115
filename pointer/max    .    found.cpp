#include<iostream>
using namespace std;
void read(int n,int *p)
{
	for(int i=0;i<n;i++)
	   cin>>*(p+i);
	cout<<" masfofa :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<"      "<<(p+i)<<endl;
	}
}
int *max_value(int n,int *p)
{
	int *m,i;
	m=(p+0);
	for(i=0;i<n;i++)
	{
		if(*(p+i)>*m)
		{
			m=(p+i);
		}
	}
	return m;
}
int *found(int n,int *p)
{
	int *add_x,x;
	cout<<"enter value found = ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(*(p+i)==x)
		{
		   add_x=(p+i);
		   break;
	    }
	}
	return add_x;
}
int *vereorse(int n,int *p)
{
	static int b[5];
	for(int i=0;i<n;i++)
	{
		b[i]=*(p+(n-i-1));
	}
    return b;
}
int main()
{
	int n,*max,*add_x,*v;
	cout<<"enter size masfofa = ";
	cin>>n;
	int a[n];
	read(n,a);
	max=max_value(n,a);
	cout<<"add max value = "<<max<<endl<<"max value = "<<*max<<endl;
	add_x=found(n,a);
	   cout<<"add x = "<<add_x<<endl<<" x = "<<*add_x<<endl;
	v=vereorse(n,a);
	for(int i=0;i<n;i++)
	   cout<<v[i]<<endl;
}
