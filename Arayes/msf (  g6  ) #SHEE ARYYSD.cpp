#include<iostream>
using namespace std;
void read(int a[],int n)
{
	int i,j,prime;
	   for(i=0;i<n;i++)
	   {	
	    prime=0;
	  	cout<<" enter value "<<i<<" = ";
	    while(prime==0)
	    {
	    
	     cin>>a[i];
	     for(j=2;j<a[i];j++)
         { 
         	if((a[i]%j)!=0)
    		  prime=1;
    		else
    		{
    		
    		   prime=0;
    		   cout<<"enter value "<<i<<" prime = ";
    		   break;
    	    }
         }
        }
       }
}
void makos(int a[],int n)
{
	int i,j=n,m;
	for(i=0;i<(n/2);i++)
	    {
	    	j=j-1;
	    	m=a[i];
	    	a[i]=a[j];
	    	a[j]=m;
	    	
	    }
	    for(i=0;i<n;i++)
	        cout<<a[i]<<endl;
}
int main ()
{
	int n;
	cout<<"enter size masfofa = ";
	cin>>n;
	int a[n];
	read(a,n);
	makos(a,n);
	
}
