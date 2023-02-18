#include<iostream>
using namespace std;
int main()
{
	int n;
	float s,sum=0.0,i=0;
	cout<<"enter n = ";
	cin>>n;
	while(i<n)
	{
		i=i+2;
		s=1.0/i;
		sum=sum+s;
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
}

