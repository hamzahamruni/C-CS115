#include <iostream>

using namespace std;

int main()
{
int i=1,x,max;
cout<<"value 1 = ";
cin>>x;
max=x;
i=i+1;
cout<<"value 2 =";
while(cin>>x)
{
    if(x>max)
        max=x;
    i=i+1;
    cout<<"value "<<i<<" = ";
}
cout<<"values "<<i-1;
cout<<"max="<<max;
}

