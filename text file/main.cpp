#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

ofstream f;
ifstream g;

void create();
void read();
void countSpace();
void countAlpha();
void countLowercase();
void countUppercase();
void countA();

int main()
{
    cout<<">>TEXT FILES<<";
    cout<<"\n1.Add to a text file.(~ to end)\n";
    cout<<"2.Read a text file.\n";
    cout<<"3.Count the no of spaces.\n";
    cout<<"4.Count the no of alphabets.\n";
    cout<<"5.Count the no of upper case letters.\n";
    cout<<"6.Count the no of lower case letters.\n";
    cout<<"7.Count the no of 'A' and 'a'.\n";
    int x;
    char choose='Y';
    while(choose=='y' || choose=='Y')
    {
        cout<<"\nChoose one of the options: ";
        cin>>x;
        switch(x)
        {
            case 1:
                create();
                break;
            case 2:
                read();
                break;
            case 3:
                countSpace();
                break;
            case 4:
                countAlpha();
                break;
            case 5:
                countUppercase();
                break;
            case 6:
                countLowercase();
                break;
            case 7:
                countA();
                break;
        }
        cout<<"\nDo you want to perform another operation?";
        cin>>choose;
    }
    return 0;
}

void create()
{
        char a;
        f.open("Sample.txt",ios::app);
        while((a=cin.get())!='~')
            f<<a;
        f.close();
}

void read()
{
        char a;
        g.open("Sample.txt");
        while(g.get(a))
            cout<<a;
        g.close();
}
void countSpace()
{
        char a;
        int x=0;
        g.open("Sample.txt");
        while(g.get(a))
            if(a==' ')
                x++;
        g.close();
        cout<<"There are "<<x<<" spaces in the file";
}
void countAlpha()
{
        char a;
        int x=0;
        g.open("Sample.txt");
        while(g.get(a))
            if(isalpha(a))
                x++;
        g.close();
        cout<<"There are "<<x<<" alphabets in the file";
}
void countUppercase()
{
        char a;
        int x=0;
        g.open("Sample.txt");
        while(g.get(a))
            if(isupper(a))
                x++;
        g.close();
        cout<<"There are "<<x<<" Upper case letters in the file";
}
void countLowercase()
{
        char a;
        int x=0;
        g.open("Sample.txt");
        while(g.get(a))
            if(islower(a))
                x++;
        g.close();
        cout<<"There are "<<x<<" Lower case letters in the file";
}
void countA()
{
        char a;
        int x=0;
        g.open("Sample.txt");
        while(g.get(a))
            if(a=='a' || a=='A')
                x++;
        g.close();
        cout<<"There are "<<x<<" A/a in the file";
}
