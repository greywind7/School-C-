#include <iostream>

using namespace std;

class Student
{
    int rno;
    char name[10];
    char dob[10];
public:
    void getData()
    {
        cout<<"Enter Details \n";
        cin>>rno>>name>>dob;
    }
    void dispData()
    {
        cout<<"Details are \n"<<rno<<name<<dob;
    }
};
int main()
{
    Student s;
    s.getData();
    s.dispData();
    return 0;
}
