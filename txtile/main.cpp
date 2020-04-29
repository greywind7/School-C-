#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

class student
{
    int rno;
    char name[20];
public:
    void getdata()
    {
        cout<<"Enter roll no and name";
        cin>>rno>>name;
    }
    void put()
    {
        cout<<rno<<name;
    }
    int getrno()
    {
        return rno;
    }
    void read();
    void write();
    void del();
    int modify();
}s1;

int main()
{
    char opt;
    int choice;
    while(1)
    {
        cout<<"1.Write in a file."<<endl;
        cout<<"2.Read from a file."<<endl;
        cout<<"3.Delete a record."<<endl;
        cout<<"4.Modify a record."<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: s1.write();break;
            case 2: s1.read();break;
            case 3: s1.del();break;
            case 4: s1.modify();break;
            case 5: return 0;
        }
        cout<<"Do you wish to continue? \n";
        cin>>opt;
        if(opt=='N' || opt=='n')
            break;
    }
    return 0;
}
void student::del()
{
    fstream f1;
    fstream f2;
    f1.open("C:\\stu.dat",ios::in);
    int rno;
    char ch;
    cout<<"Enter roll no of the student whose record is to be deleted.";
    if(!f1)
    {
        cout<<"Unable to get file.";
        getch();
        return;
    }
    while(f1.read((char*)&s1,sizeof(s1)))
    {
        if(s1.getrno()==rno)
        {
            s1.put();
            cout<<"Do you wish to delete this record?";
            cin>>ch;
            if(ch=='N')
                f2.write((char*)&s1,sizeof(s1));
        }
        else
            f2.write((char*)&s1,sizeof(s1));
    }
    f1.close();
    f2.close();
    remove("C:\\stu.dat");
    //remove("c:\\temp.dat","c:\\stu.dat");
    getch();
}
void student::write()
{
    fstream f1;
    f1.open("C:\\stu.dat",ios::in);
    char c;
    while(1)
    {
        s1.getdata();
        f1.write((char*)&s1,sizeof(s1));
        cout<<"Do you wish to enter more records?";
        cin>>c;
        if(c=='N' || c=='n')
            break;
    }
}
void student::read()
{
    fstream f1;
    f1.open("C:\\stu.dat",ios::in);
    cout<<"Enter new record ";
    s1.getdata();
    if(!f1)
    {
        cout<<"Error in creating file \n";
        return;
    }
    while(f1.write((char*)&s1,sizeof(s1)))
    {
        s1.put();
        f1.close();
    }
    getch();
}
int student::modify()
{
    char ch;
    fstream f1;
    f1.open("C;\\stu.dat",ios::in);
    if(!f1)
    {
        cout<<"File not found ";
        return 0;
    }
    while(f1.read((char*)&s1,sizeof(s1)))
    {
        if(s1.getrno()==rno)
        {
            s1.put();
            cout<<"Do you want to modify this record? ";
            cin>>ch;
            if(ch=='Y' || ch=='y')
            {
                cout<<"Enter new record ";
                s1.getdata();
            }
        }
    }
    f1.seekp(-1*sizeof(s1,ios::cur));
    f1.write((char*)&s1, sizeof(s1));
    f1.close();
    getch();
}
