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
	for(int i=0;i<n;i++)
	{
		cout<<"entar id of std "<<i+1<<" : ";
		cin>>st[i].id;
		cout<<"enter name of std "<<i+1<<" : ";
		cin.getline(st[i].name,19,'\n');
		cout<<"enter t1 t2 f "<<i+1<<" : ";
		cin>>st[i].g[0];
		cin>>st[i].g[1];
		cin>>st[i].g[2];
		st[i].g[3]=st[i].g[0]+st[i].g[1]+st[i].g[2];	
	}
}
void print(Std st[],int n)
{
	cout<<"id "<<"it name "<<"it grade"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<st[i].id;
		cout<<"it "<<st[i].name;
		cout<<"it "<<st[i].g[0];
		cout<<"  "<<st[i].g[1];
		cout<<"  "<<st[i].g[2];
		cout<<"  "<<st[i].g[3]<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter #of students :";
	cin>>n;
	Std st[n];
	read(st,n);
	print(st,n);
}
