#include <iostream>
using namespace std;
int main()
{
int f1,f2,fn,n;
cout<<"enter n =";
cin>>n;
f1=0;
f2=1;
n=n-2;
while (n>0)
{
    fn=f1+f2;
    n=n-1;
    f1=f2;
    f2=fn;
    cout<<f1<<f2;
}
}

