#include<iostream>
using namespace std;
int main()
{
	int x,y,z,max1,max2,i;
	cout<<"enter value 1 = ";
	cin>>x;
	max1=x;
	cout<<"enter value 2 =";
	cin>>y;
	max2=y;
	cout<<"enter value 3 =";
	cin>>z;
	if(max1<z || max2<z)
	{
	    if(max1<z && max2>max1)
	       max1=z;
	    else
	        max2=z;
	}
	cout<<"max1 = "<<max1<<"  max2 = "<<max2;
}
