#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        char A[5000000],B[5000000],C[5000000]="S";
        int n;
        cin>>A>>B>>n;
        while(strlen(C)<=n+1)
        {
            for(int i=0;A[i]!='\0';i++)
                C[strlen(C)+i]=A[i];
            for(int i=0;B[i]!='\0';i++)
                C[strlen(C)+i]=B[i];
            for(int i=0;i<strlen(B);i++);
            {
                A[i]=B[i];
            }A[strlen(B)]='/0';
            for(int i=0;i<strlen(C);i++);
            {
                B[i]=C[i+1];

            }B[strlen(C)]='/0';
        }
        cout<<C[n]<<endl;
    }
    return 0;
}
