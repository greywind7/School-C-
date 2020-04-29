#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Enter a no.s of your choice";
    int a,r;
    cin>>a;
    cout<<"Choose an operation"<<endl
    <<"1.Square"<<endl<<"2.Cube"<<endl<<"3.Square root";
    cin>>r;
    switch(r)
    {
    case 1:
        cout<<"Square of "<<a<<" is "<<a*a;
        break;
    case 2:
        cout<<"Cube of "<<a<<" is "<<a*a*a;
        break;
    case 3:
        cout<<"Square root of "<<a<<" is "<<sqrt(a);
        break;
    default :
        cout<<"Choose a valid operation!";
    }
    return 0;
}
