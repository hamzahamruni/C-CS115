#include<iostream>
using namespace std;
struct Std
{
	long id;
	char name[20];
	float g[4];
};
void read(Std st[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter id = ";
		cin>>st[i].id;
		cin.ignore();
		cout<<"enter name : ";
		cin.getline(st[i].name,19,'\n');
		cout<<"enter graga = ";
		cin>>st[i].g[0]>>st[i].g[1]>>st[i].g[2];
		st[i].g[3]=st[i].g[0]+st[i].g[1]+st[i].g[2];
	}
}
void print(Std st[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"id "<<i+1<<" = "<<st[i].id;
		cout<<"\t"<<"name of student "<<i+1<<": "<<st[i].name;
		cout<<"\t"<<"g all = "<<st[i].g[3]<<endl;
		
	}
}
int main()
{
	int n;
	cin>>n;
	Std st[n];
	read(st,n);
	print(st,n);
}
