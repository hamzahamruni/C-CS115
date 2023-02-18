#include<iostream>
using namespace std;
int main()
{
	int year=0,month=0,days=0,n,y;
	cout<<"enter days = ";
	cin>>n;
	year=n/365;
	y=n%365;
	month=y/30;
	days=y%30;
     cout<<"years = "<<year<<" month = "<<month<<" days = "<<days;
	   
}
