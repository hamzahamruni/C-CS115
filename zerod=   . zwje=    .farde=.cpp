#include<iostream>
using namespace std;
int main()
{
	int i=2,x,zeros=0,zwje=0,farde=0;
	cout<<"enter number 1 = ";
	for (;cin>>x;i++)
	{
		if(x==0)
		   zeros=zeros+1;
		if(x>0&& x%2==0)
		   zwje=zwje+1;
		if(x%2!=0)
		   farde=farde+1;
		cout<<"enter number "<<i<<" = ";
	}
    cout<<"zeros = "<<zeros<<" zwje = "<<zwje<<" farde = "<<farde;
    return 0;
}

