#include <iostream>
using namespace std;
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
   int i=2,n;
   float x,cosx=0;
   cout<<"Enter value N = ";cin>>n;
   cout<<"Enter value  X = ";cin>>x;
   cosx=1-fun1(i,x)/fact(i);
   for(i=4;i<=n;)
   {
       cosx+=fun1(i,x)/fact(i);
	   i=i+2;
       if(i<=n)
       {
          cosx-=fun1(i,x)/fact(i);
          i=i+2;
       }
   }
   cout<<endl<<endl<<"     cos x = "<<cosx<<endl<<endl;
}
