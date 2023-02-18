#include<iostream>
using namespace std;
int main()
{
	int tgad(int old_m,int years);
	int old_m,number_m,years_m,n,i,t;
	cout<<"how miny mowdfs = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter number mowdf  "<<i<<" = ";
		cin>>number_m;
		cout<<"enter old mowdf =  "<<i<<" = ";
		cin>>old_m;
		cout<<"rnter years mowdf = "<<i<<" = ";
		cin>>years_m;
		t=tgad(old_m,years_m);
		if(t==1)
		  cout<<"mowdf number is "<<number_m<<" is tgada "<<endl;
		else
		  cout<<"mowdf unmber is "<<number_m<<" is not tgada "<<endl;
		
	}
}
int tgad(int old_m,int years)
{
	int i,x;
	if(old_m>=70 || years>=30)
	     x=1;
    else
         x=0;
    return x;
}

