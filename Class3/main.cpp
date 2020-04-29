#include <iostream>

using namespace std;

class Student
{
    int Admno;
    char Sname[25];
    float english,maths,science,total;
    float seeTotal()
    {
        return english+maths+science;
    }
public:
    void TakeData()
    {
        cout<<"Enter Details \n";
        cin>>Admno>>Sname>>english>>maths>>science;
        total=seeTotal();
    }
    void ShowData()
    {
        cout<<"Name and adm no \n"<<Admno<<Sname<<"\n Marks in english ,maths, science and total marks are";
        cout<<english<<' '<<maths<<' '<<science<<' '<<total;
    }
};
int main()
{
    Student s;
    s.TakeData();
    s.ShowData();
    return 0;
}
