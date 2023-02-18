#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"          name           : hamza jamal hamruni"<<endl<<"          student uumber : 213010793"<<endl<<endl;
    int i,j,k=1;
    for(i=9;i>=0;i--)
    {
        cout<<setw(k++);
        for(j=0;j<i;j++)
        {
		  cout<<"*";
		}
        i--;
        cout<<endl;
	}
}
