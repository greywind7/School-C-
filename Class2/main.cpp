#include <iostream>

using namespace std;

class Teacher
{
    int tcode;
    char name[25];
    char dob[25];
    char subject[25];
public:
    void getDetails()
    {
        cout<<"Enter Details \n";
        cin>>tcode>>name>>dob>>subject;
    }
    void dispDetails()
    {
        cout<<"Details are \n"<<tcode<<name<<dob<<subject;
    }
};
int main()
{
    Teacher t;
    t.getDetails();
    t.dispDetails();
    return 0;
}
