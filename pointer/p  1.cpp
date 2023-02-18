#include<iostream>
using namespace std;
void print(int *p)
{
	for(int i=0;i<5;i++)
	  cout<<*(p+i)<<endl;
}
int main()
{
	int a[5],*p;
	for(int i=0;i<5;i++)
	   cin>>a[i];
    p=a;
	cout<<"masfofa :"<<endl;
	print(a);
}
