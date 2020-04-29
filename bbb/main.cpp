#include <iostream>

using namespace std;




int main()
{

    for(int i=1;i<=10000;i++)
    {
        char a=65;
        for(int j=1;j<=i;j++)
        {
            cout<<a;
            a=a+1;
        }
        cout<<endl;
    }
    return 0;
}
