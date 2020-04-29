#include <iostream>

using namespace std;

int main()
{
    int i,A[111],B[111],C[111],m,n;
    cout<<"Enter sizes of arrays";
    cin>>m>>n;
    cout<<"Enter values in first array";
    for(i=0;i<m;i++)
        cin>>A[i];
    cout<<"Enter values in second array";
    for(i=0;i<n;i++)
        cin>>B[i];
    int ctr1=0,ctr2=0,ctr3=0;
    while(ctr1<m && ctr2<n)
    {
        if(A[ctr1]>B[ctr2])
        {
            C[ctr3]=A[ctr1];
            ctr1++;ctr3++;
        }
        else
        {
            C[ctr3]=B[ctr2];
            ctr2++;ctr3++;
        }
    }
    while(ctr2<n)
    {
        C[ctr3]=B[ctr2];
        ctr3++;ctr2++;
    }
    while(ctr1<m)
    {
        C[ctr3]=B[ctr2];
        ctr3++;ctr2++;
    }
    cout<<"Merged array in descending order";
    for(i=0;i<n+m;i++)
        cout<<C[i]<<'\t';
    return 0;
}
