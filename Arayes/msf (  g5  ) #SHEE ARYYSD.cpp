#include<iostream>
using namespace std;
void read(int a[],int &n)
{
	int i;
	cout<<"enter size masfofa = ";
	cin>>n;
	while(n>20)
	{
		cout<<"enter size masfofa >= 20 = ";
		cin>>n;
	}
	for(i=0;i<n;i++)
	    cin>>a[i];
}
void def(int a[],int n)
{
	int i,j;
	for(i=n;i>0;i--)
	    a[i]=a[i-1];
	cout<<"def valuer in start = ";
	cin>>a[0];
	for(i=0;i<=n;i++)
	   cout<<a[i]<<endl;
}               
void def_m(int a[],int n)
{
	int i,j,m,v;
	cout<<"enter moga = ";
	cin>>m;
	cout<<"enter value = "; 
	cin>>v;        
	n=n+1;      
	for(i=n;i>m;i--)
	   a[i]=a[i-1];
	a[m]=v;
	for(i=0;i<=n;i++)
	   cout<<a[i]<<endl;
}
void no(int a[],int n)
{
	int i,j;
	cout<<"delet "<<endl;
	for(i=0;i<=n;i++)
	    a[i]=a[i+1];
	for(i=0;i<=n;i++)
	  cout<<a[i]<<endl;
}
void no_m(int a[],int n)
{
	int i,j,m,v;
	cout<<"emter moga = ";
	cin>>m;
	for(i=m;i<n;i++)
	   a[i]=a[i+1];
	for(i=0;i<n;i++)
	  cout<<a[i]<<endl;
}
void print(int a[],int n)
{
	int i;
	cout<<"end masfofa : "<<endl;
	for(i=0;i<n;i++)
	    cout<<a[i]<<endl;
}
int main()
{
	int a[20],n;
	read(a,n);
	def(a,n);
	def_m(a,n);
	no(a,n);
	no_m(a,n);
	print(a,n);
}
