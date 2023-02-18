#include<iostream>
using namespace std;
struct mobailes
{
	char des[20];
	char num[20];
	int pri;
	int qua;
};
void read(mobailes mob[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter type mobail : ";
		cin.getline(mob[i].des,19,'\n');
		cout<<"enter number mobail : ";
		cin.getline(mob[i].num,19,'\n');
		cout<<"enter price mobail = ";
		cin>>mob[i].pri;
		cout<<"enter quantity mobaile = ";
		cin>>mob[i].qua;
		cin.ignore();
	}
}
void print(mobailes mob[],int n)
{
	int i;
	cout<<"type :"<<"\t"<<"number :"<<"\t"<<"price :"<<"\t"<<"quantity :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<mob[i].des;
		cout<<"\t"<<mob[i].num;
		cout<<"\t"<<mob[i].pri;
		cout<<"\t"<<mob[i].qua;
	}
}
int main()
{
	int n;
	cout<<"how miny of mobiles = ";
	cin>>n;
	cin.ignore();
	mobailes mob[n];
	read(mob,n);
	print(mob,n);
	
}
