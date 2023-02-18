#include <iostream>
using namespace std;
float fun1(int i,int x);
float fun2(int i);
int main()
{
int i,n;
float x,sinx=0;
cout<<"ENTER N : ";cin>>n;
while(n%2==0)
{
    cout<<"ENTER N : ";
    cin>>n;
}
    cout<<"\nENTER X : ";cin>>x;
for(i=1;i<=n;i++)
{
    if(i==n)
    {
      cout<<"(x^"<<i<<"/"<<i<<"!)=";
    }
    else
cout<<"(x^"<<i<<"/"<<i<<"!)-";
    sinx+=fun1(i,x)/fun2(i);
    cout<<"wsrs"<<sinx;
    i++;
    i++;
    if(i<=n)
    {
         if(i==n)
    {
    cout<<"(x^"<<i<<"/"<<i<<"!)=";
    }
    else
    cout<<"(x^"<<i<<"/"<<i<<"!)+";
      sinx-=fun1(i,x)/fun2(i);
    }
    i++;
}
cout<<"  \n\n ******************\n\n  anser sin x = : "<<sinx<<"\n\n\n\n";
    return 0;
}
//-------------------------------------------
float fun1(int i,int x)
{
    int j;
    float fact=1;
    for(j=1;j<=i;j++)
    {
      fact=fact*x;
    }
    return fact;
}
//--------------------------------
float fun2(int i)
{
   float fact1=1;
    for(int j=1;j<=i;j++)
    {
       fact1*=j;
    }
    return fact1;
}
