#include<iostream>
#include<string.h>
using namespace std;
void copy(char s1[],char s2[],char s3[])
{
	s3=s1;
	s1=s2;
	s2=s3;
    cout<<s1<<endl<<s2;
}
int main()
{

   char s1[80],s2[80],s3[80];
   cout<<"enter string s1 : "<<endl;
   cin.getline(s1,79,'\n');
   cout<<"enter string s2 : "<<endl;
   cin.getline(s2,79,'\n');
   int len=strlen(s1);
   cout<<"len s1 = "<<len<<endl;
   int c=strcmp(s1,s2);
   if(c==0)
     cout<<"s1 = s2 "<<endl;
    else
    {
    	if(c>0)
    	  cout<<"s 1 > s2 "<<endl;
    	else
    	  cout<<"s1 < s2 "<<endl;
    }
    strcat(s1,s2);
    cout<<s1<<endl<<s2<<endl;
   copy(s1,s2,s3);
}
