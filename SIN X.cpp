#include <iostream>
using namespace std;
float exponent(int i,int x)
{
    int j;
    float exp=1;
    for(j=1;j<=i;j++)
    {
      exp=exp*x;
    }
    return exp;
}
float fact(int i)
{
   float fact1=1;
    for(int j=1;j<=i;j++)
    {
       fact1*=j;
    }
    return fact1;
}

int main()
{
   int i=3,n;
   float x,sinx=0;
   cout<<"          name           : hamza jamal hamruni"<<endl<<"          student uumber : 213010793"<<endl<<endl;
   cout<<"Enter value N = ";cin>>n;
   cout<<"Enter value  X = ";cin>>x;
   sinx=x-exponent(i,x)/fact(i);
   for(i=5;i<=n;)
   {
       sinx+=exponent(i,x)/fact(i);
	   i=i+2; 
       if(i<=n)
       {
          sinx-=exponent(i,x)/fact(i);
          i=i+2;
       }
   }
   cout<<endl<<endl<<"     sin x = "<<sinx<<endl<<endl;
}
