#include<iostream>
using namespace std;
int space(char str[])
{
	int i,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		    c++;
	}
	return c;
}
int haref(char str[])
{
	int i,h=0;
	for(i=0;str[i]!='\n';i++)
	{
		if(str[i]<='a' && str[i]>='z')
		
		    h++;
	}
	return h;
}
int main()
{
	char str[80];
	cin.getline(str,79,'\n');
	int sc=space(str);
	cout<<"space = "<<sc<<endl;
	int har=haref(str);
	cout<<"miny of horof = "<<har;
}
