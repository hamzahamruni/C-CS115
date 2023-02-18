#include<iostream>
using namespace std;
int main()
{
	int i,x,n,z,f,mod_z,mod_f,sum_z=0,sum_f=0,a=0,b=0;
	cout<<"enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"value =";
	cin>>x;
	if((x%2)==0)
	{
	   z=x;
	   sum_z=sum_z+z;
	   a=a+1;
	}
     else
     {
	   f=x;
	   sum_f=sum_f+f;
       b=b+1;
	}
	}
	mod_z=sum_z/a;
	mod_f=sum_f/b;
	cout<<"mod zwje = "<<mod_z<<endl;
	cout<<"mod frde = "<<mod_f;
	return 0;
}

