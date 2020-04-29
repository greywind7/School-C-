#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int i;
void countA(char A[])
{
    int p=0;
    for(i=0; A[i]!='\0'; i++)
        if(A[i]=='A' || A[i]=='a')
            p=p+1;
    cout<<"A is present "<<p<<" times";
}
void countDig(char A[])
{
    int p=0;
    for (i=0; A[i]!='\0'; i++)
        if(isdigit(A[i]))
            p+=1;
    cout<<"Digit is present "<<p<<" times";
}
void countVowConst(char A[])
{
    int p=0,z=0;
    for (i=0; A[i]!='\0'; i++)
        switch(A[i])
        {
            case 'a':
            case 'A':
                p+=1;
                    break;
            case 'e':
            case 'E':
                p+=1;
                    break;
            case 'i':
            case 'I':
                p+=1;
                    break;
            case 'o':
            case 'O':
                p+=1;
                    break;
            case 'u':
            case 'U':
                p+=1;
                    break;
        }
    cout<<"Vowel is present "<<p<<" times";
    for(i=0;A[i]!='\0';i++)
        if(isalpha(A[i]))
            z+=1;
    cout<<"/nConsonant are present "<<z-p<<" times";
}
void countAlpha(char A[])
{
    int p=0;
    for(i=0;A[i]!='\0';i++)
        if(isalpha(A[i]))
            p+=1;
    cout<<p<<" Alphabets are present";
}
void dispLn(char A[])
{
    for(i=0;A[i]!='\0';i++);
    cout<<"Length is "<<i;
}
void dispRv(char A[])
{
    for(i=0;A[i]!='\0';i++);
    for(i=i-1;i>=0;i--)
        cout<<A[i];
}
void dispUpr(char A[])
{
    for(i=0;A[i]!='\0';i++)
        if(A[i]>=97 && isalpha(A[i]))
            A[i]-=32;
    cout<<A;
}
void dispLwr(char A[])
{
    for(i=0;A[i]!='\0';i++)
        if(A[i]<=90 && isalpha(A[i]))
            A[i]+=32;
    cout<<A;
}
int main()
{
    char A[100];
    cout<<"Enter any word ";
    gets(A);
    int ch;
    cout<<"1.Display length of the word"<<endl;
    cout<<"2.Display word in reverse order"<<endl;
    cout<<"3.Display the word in upper case"<<endl;
    cout<<"4.Display the word in lower case"<<endl;
    cout<<"5.Display the number of 'A'"<<endl;
    cout<<"6.Display the number of digits"<<endl;
    cout<<"7.Display the number of consonants and vowels"<<endl;
    cout<<"8.Display the number of alphabets"<<endl;
    char ctr='y';
    while(ctr=='y'||ctr=='Y')
    {
        cout<<"Enter your choice- ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                dispLn(A);
                    break;
            case 2:
                dispRv(A);
                    break;
            case 3:
                dispUpr(A);
                    break;
            case 4:
                dispLwr(A);
                    break;
            case 5:
                countA(A);
                    break;
            case 6:
                countDig(A);
                    break;
            case 7:
                countVowConst(A);
                    break;
            case 8:
                countAlpha(A);
                    break;
        }
        cout<<"\nDo you want to continue? \n";
        cin>>ctr;
    }
    return 0;
}
