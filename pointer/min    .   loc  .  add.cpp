#include<iostream>
using namespace std;
int main()
{
	int n,j;
	cout<<"enter masfofa =";
	cin>>n;
	int a[n];
	cout<<"enter masfofa :"<<endl;
	for(int i=0;i<n;i++)
	    cin>>a[i];
	int sum=0,*p;
	p=a;
	for(int i=0;i<n;i++)
	   sum=sum+*(p+i);
	int min,loc,*add;
	min=*(p+0);
	loc=0;
	add=(p+0);
	for(j=1;j<n;j++)
    {
		if(*(p+j)<min)
		{
			min=*(p+j);
			loc=j;
			add=(p+j);
		}
	}
	cout<<"sum = "<<sum<<endl<<"min = "<<min<<endl<<"loc = "<<loc<<"add = "<<add<<endl;
	
	
}
