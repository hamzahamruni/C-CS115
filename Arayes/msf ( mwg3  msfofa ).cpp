#include<iostream>
using namespace std;
void read(int n,int a[])
{
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int find(int n,int a[],int x)
{
	int pos=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			pos=i;
			return (pos);
		}
	}
    return (pos);
}
int main()
{
	int n;
	cout<<"enter size of masfofa = ";
	cin>>n;
	int a[n],x;
	read(n,a);
	cout<<"enter number found = ";
	cin>>x;
	int pos=find(n,a,x);
	if(pos==-1)
	   cout<<x<<" is not found in masfofa ";
	else
	    cout<<x<<" is found in masfofa  pos = "<<pos;
}
