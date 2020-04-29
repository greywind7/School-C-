#include <iostream>

using namespace std;

int main()
{

    for(int i=1; i<=5;i++)
    {

        for(int j=1; j<=i;j++)
        {
            int x=65;
            cout<<char(x);
            x=x+2;
        }
        cout<<endl;
    }
    return 0;
}
