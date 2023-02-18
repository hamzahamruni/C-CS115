#include<iostream>
using namespace std;
int is_prime(int n)
{
	int prime=1,i;
	for(i=2;i<n;i++)
    {
    	if(n%i==0)
    	{
    		prime=0;
    		return (prime);
    	}
    }	
    return (prime);
}
int main()
{
	int x;
	cout<<"enter on intager number = ";
	cin>>x;
	int prime=is_prime(x);
	if(prime==1)
	  cout<<"is a pimer number ";
	else
	  cout<<"is not pimer number ";
}
