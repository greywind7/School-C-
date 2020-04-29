#include <iostream>

using namespace std;

int main()
{
    int a[10],temp,z;
    cout<<"Enter the no.s";
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int j=0;j<10;j++)
    {
        temp=a[j];
        z=j+1;
        while(temp<a[z] && z>=0)
        {
            a[z]=a[j];
            z=j-1;
        }
    }
    for(int k=0;k<10;k++)
        cout<<a[k]<<" ";
    return 0;
}
