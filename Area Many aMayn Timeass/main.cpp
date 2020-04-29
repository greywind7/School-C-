#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
   char x;
   do
   {
       cout<<"Enter a choice \n";
       cout<<"1.Circle \n";
       cout<<"1.Triangle \n";
       int y;
       cin>>y;
       switch(y)
       {


       case 1:cout<<"Circle";
       break;
       case 2:cout<<"Traiamghj";
       break;
       }
    }while(x=='Y');

       cout<<"Do you wish to continue";
       cin>>x;
       if(x!='Y')
          {
             exit(0);
          }
   return 0;
}
