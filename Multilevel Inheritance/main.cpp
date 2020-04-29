#include <iostream>

using namespace std;

class person
{
    char name[100];
    int age;
    public:
        void getdata()
        {
            cout<<"Name ";
            cin>>name;
            cout<<"Age ";
            cin>>age;
        }
        void display()
        {
            cout<<"Name "<<name<<endl;
            cout<<"Age "<<age<<endl;
        }
};

class club: public person
{
    char club[100];
    float transfer;
    public:
        void getdata()
        {
            person::getdata();
            cout<<"Name of Club ";
            cin>>club;
            cout<<"Transfer sum(Million $) ";
            cin>>transfer;
        }
        void display()
        {
            person::display();
            cout<<"Club  "<<club<<endl;
            cout<<"Transfer sum(Million $) "<<transfer<<endl;
        }
};

class footballer: public club
{
    int goal;
    public:
        void getdata()
        {
            club::getdata();
            cout<<"Career goals ";
            cin>>goal;
        }
        void display()
        {
            club::display();
            cout<<"Career goals "<<goal;
        }
};

int main()
{
    footballer f;
    cout<<"Enter data"<<endl;
    f.getdata();
    cout<<endl<<"Displaying data"<<endl;
    f.display();
    return 0;
}
