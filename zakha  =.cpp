#include<iostream>
using namespace std;
int main()
{
	float mon,zak;
	cout<<"enter a mount of maney=";
	cin>>mon;
	if (mon>=1000)
	{
		zak=mon*0.025;
		cout<<"zakaha="<<zak<<endl;
	}
    else
      cout<<"no zakha"<<endl;
      return 0;
}
