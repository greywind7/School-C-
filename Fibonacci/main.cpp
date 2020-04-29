#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char ch;
    do
    {
        cout<<"Till how many terms '\0'";
        float a,x,y=0,z=1;
        cin>>a;
        cout<<1<<" ";
        for(int i=1;i<=a-1;++i)
        {
            x=y+z;
            cout<<x<<" ";
            y=z;
            z=x;
        }
        cout<<"Do you want to cont.??";
        cin>>ch;
        if(ch!='Y' || ch!='y')
        {
            exit(0);
        }
    }while(ch=='y' || ch=='Y');
    getch();
}
