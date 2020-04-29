#include <iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;
int i,j;
void disp(int X[][100], int s)
{
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
           cout<<X[i][j]<<'\t';
        cout<<endl;
    }
}
void dispSq(int X[][100], int s)
{
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            cout<<pow(X[i][j],2)<<'\t';
        cout<<endl;
    }
}
void dispCub(int X[][100], int s)
{
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            cout<<pow(X[i][j],3)<<'\t';
        cout<<endl;
    }
}
void dispSqrt(int X[][100], int s)
{
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            cout<<sqrt(X[i][j])<<'\t';
        cout<<endl;
    }
}
void doSum(int X[][100], int s)
{
    int p=0;
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            p=p+X[i][j];
    cout<<"The sum is "<<p;
}
void dispDiag(int X[][100], int s)
{
    cout<<"Right Diagonal";
    for(i=0;i<s;i++)
           cout<<X[i][i]<<'\t';
    cout<<'\n'<<"Left diagonal";
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            if(i+j==s-1)
                cout<<X[i][j]<<'\t';
}
void dispSumIndRow(int X[][100], int s)
{
    int n,p=0;
    cout<<"Enter the row whose sum you want to display ";
    cin>>n;
    for(i=0;i<s;i++)
        p+=X[n-1][i];
    cout<<"The sum is "<<p;
}
void dispSumIndCol(int X[][100], int s)
{
    int n,p=0;
    cout<<"Enter the column whose sum you want to display ";
    cin>>n;
    for(i=0;i<s;i++)
        p+=X[i][n-1];
    cout<<"The sum is "<<p;
}
void dispTri(int X[][100],int s)
{
    cout<<"Upper triangle ";
    for(i=0;i<s;i++)
        for(j=i+1;j<s;j++)
            cout<<X[i][j]<<'\t';
    cout<<endl;
    cout<<"Lower triangle ";
    for(i=1;i<s;i++)
        for(j=0;j<i;j++)
            cout<<X[i][j]<<'\t';
}
void sumDiag(int X[][100], int s)
{
    int p=0,m=0;
    cout<<"Right Diagonal ";
    for(i=0;i<s;i++)
           p+=X[i][i];
    cout<<"Sum is "<<p<<'\n';
    cout<<"Left diagonal ";
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            if(i+j==s-1)
                m+=X[i][j];
    cout<<"Sum is "<<m;
}
void dispTrans(int X[][100],int s)
{
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            cout<<X[j][i]<<'\t';
        cout<<endl;
    }
}
void doProd(int X[][100], int s)
{
    int Y[100][100],Z[100][100],m,n;
    cout<<"Enter size of second array";
    cin>>m>>n;
    while(1)
    {
        if(s==m)
            break;
        else
        {
            cout<<"The matrices cant be multiplied ";
            exit(0);
        }
    }
    cout<<"Enter the second matrix";
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>Y[i][j];
    for(i=0;i<s;i++)

        {

            for(j=0;j<n;j++)
            {
                Z[i][j]=0;
                for(int k=0;k<n;k++)
                    Z[i][j]+=X[i][k]*Y[k][j];
            }
        }
    for(i=0;i<s;i++)
    {
        for(j=0;j<n;j++)
            cout<<Z[i][j]<<'\t';
        cout<<'\n';
    }
}

int main()
{
    int X[100][100],s,ch;
    cout<<"Enter size of the array ";
    cin>>s;
    cout<<"Enter the array";
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            cin>>X[i][j];
    cout<<"Choose one of the following "<<endl;
    cout<<"1.Display the matrix"<<endl;
    cout<<"2.Square of the matrix"<<endl;
    cout<<"3.Cube of the matrix"<<endl;
    cout<<"4.Square root of the matrix"<<endl;
    cout<<"5.Display row elements"<<endl;
    cout<<"6.Display column elements"<<endl;
    cout<<"7.Sum of row elements"<<endl;
    cout<<"8.Sum of column elements"<<endl;
    cout<<"9.Left and right diagonals"<<endl;
    cout<<"10.Sum of individual row elements"<<endl;
    cout<<"11.Sum of individual column elements"<<endl;
    cout<<"12.Upper and lower triangle elements"<<endl;
    cout<<"13.Sum of diagonal elements"<<endl;
    cout<<"14.Display transpose of the matrix"<<endl;
    cout<<"15.Product of two arrays"<<endl;
    char ctr='Y';
    while(ctr== 'y' || ctr=='Y')
    {
        cout<<"Enter your choice- ";
        cin>>ch;
        switch(ch)// Case 1,5,6 are same; Similarly 7,8 are same.
        {
            case 1:
            case 5:
            case 6:
                disp(X,s);
                    break;
            case 2:
                dispSq(X,s);
                    break;
            case 3:
                dispCub(X,s);
                    break;
            case 4:
                dispSqrt(X,s);
                    break;
            case 7:
            case 8:
                doSum(X,s);
                    break;
            case 9:
                dispDiag(X,s);
                    break;
            case 10:
                dispSumIndRow(X,s);
                    break;
            case 11:
                dispSumIndCol(X,s);
                    break;
            case 12:
                dispTri(X,s);
                    break;
            case 13:
                sumDiag(X,s);
                    break;
            case 14:
                dispTrans(X,s);
                    break;
            case 15:
                doProd(X,s);
                    break;
        }
        cout<<'\n'<<"Do you wish to continue?(Y/N)";
        cin>>ctr;
        if(ctr == 'N' || ctr =='n')
            exit(0);
    }
    return 0;
}

