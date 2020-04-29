#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,z=1;
    cout<<"Enter a no";
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        z=z*i;
    }
    cout<<"Factorial of "<<n<<" is "<<z;
    getch();
    return 0;
}
