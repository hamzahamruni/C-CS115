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
void smol(int a[],int n)
{
	int i,j,sm1=a[0],sm2=a[1];
	for(i=2;i<n;i++)
	{
		if(a[i]<sm1 || a[i]<sm2)
		    if(a[i]<sm1 && sm1>sm2)
		       sm1=a[i];
		    else
		        sm2=a[i];
	}
	cout<<"smol tow numbers = "<<sm1<<" and "<<sm2;
}
int main ()
{
	int n;
	cout<<"enter size masfofa = ";
	cin>>n;
	int a[n];
	read(a,n);
	smol(a,n);
}
