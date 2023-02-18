#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i;
	float s2=1.0,s1=1.0,m,z,s;
	cout<<"enter n";
	cin>>n;
	for (i=2;i<=n;i++)
	{
	if((i%2)==0)
	{
		m=(1.0-(1/pow(i,2)));
		s1=s1*m;
	}
	else
	{
		z=(1.0+(1/pow(i,2)));
		s2=s2*z;
	}
    }
    s=s1*s2;
	cout<<"s = "<<s;
}
