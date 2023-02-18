#include<iostream>
using namespace std ;
int copy(int a[],int n,int b[],int m,int c[],int &h)
{
	int i,j,f=0;
	h=-1;
	
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<m;j++)
	    {
	    	if(a[i]==b[j])
	    	{
	        f=1;
	        break;
			}
	       }
	   if ( f==0)
	    h=h+1;
		c[h]= a[i];
	}
}
int main()
{
	int n,m,i,h;
	cout<<"enter size masfofa A = ";
	cin>>n;
	cout<<"enter size masfofa B = ";
	cin>>m;
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
	copy(a,n,b,m,c,h);
	if (h==-1)
    {
    	cout<<"not c";
    }
   else;
   {
        for(i=0;i<=h;i++)
	    cout<<c[i]<<endl;
   }
}
