#include<iostream>
using namespace std;
int fun_space(char str[]);
int main()
{
	char str[20];
	cout<<"enter str : ";
	cin.getline(str,19,'.');
	int sc=fun_space(str);
	cout<<"spaces = "<<sc;
}
int fun_space(char str[])
{
	int c=0,i;
	for(i=0;str[i]!='\n';i++)
	{
		if(str[i]==' ')
		   c=c+1;
	}
	return c;
}
