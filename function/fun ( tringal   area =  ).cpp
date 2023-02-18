#include<iostream>
#include<math.h>
using namespace std;
int cheek(float n)
{
	if(n>0)
	   return 1;
	else
	   return 0;
}
float is_tringl(float a,float b,float c)
{
	if(a+b>c && b+c>a && a+c>b)
	     return 1;
	else
	      return 0;
}
float area(float a,float b,float c)
{
	float s,area,m;
	s=(a+b+c)/2.0;
	m=(s*(s-a))+(s*(s-b))+(s*(s-c));
	area=pow(m,0.5);
	return (area);
}
int main()
{
	float a,b,c,m;
	cout<<"enter tringl 1 = ";
	cin>>a;
	while(cheek(a)==0)
	{
	   cout<<"enter tringl 1 >0 = ";
	   cin>>a;
    }
    cout<<"enter tringal 2 = ";
    cin>>b;
    while(cheek(b)==0)
    {
        cout<<"enter tringal 2 >0 = ";
        cin>>b;
    }
    cout<<"enter tringal 3 = ";
    cin>>c;
    while(cheek(c)==0)
    {
    	cout<<"enter tringal 3 >0 = ";
        cin>>c;
    }
    if(is_tringl(a,b,c)==0)
       cout<<"is not tringal ";
    else
    {
    	m=area(a,b,c);
    	cout<<"area = "<<area;
    }
}
