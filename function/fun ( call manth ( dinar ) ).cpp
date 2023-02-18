#include<iostream>
using namespace std;
int fun_call(int n)
{
	int m1=0,m2=0,m3=0,many;
	if(n<=5)
	   m1=n*100;
	else
	   m1=5*100;
	if(n<=10 && n>5)
	{
	   n=n-5;
	   m2=n*80;
    }
	if(n>10)
	{
		m2=5*80;
	}
	if(n>10)
	   m3=(n-10)*50;
	many=m1+m2+m3;
	return (many);
}
int fun_many(int n)
{
	int d,m;
	d=n/1000;
	if(d!=0)
	   cout<<d<<" dinar";
	m=n%1000;
	if(m!=0)
	    cout<<" "<<m<<" drham";	
}
int main()
{
	int n;
	cout<<"how minutes call = ";
	cin>>n;
	int m=fun_call(n);
	cout<<"many call is = "<<m<<endl;
	fun_many(m);
}
