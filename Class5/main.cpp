#include <iostream>

using namespace std;

class Student
{
    int rollno,marks[5];
    char name[20],Class[8];
    float percentage;
    float calculate();
public:
    void readMarks();
    void displayMarks();
};
int main()
{
    Student s;
    s.readMarks();
    s.displayMarks();
    return 0;
}
float Student::calculate()
{
    for(int i=0;i<5;i++)
        percentage+=marks[i];
    return percentage/5;
}
void Student::readMarks()
{
    cout<<"Enter Details(Marks out of 100) \n";
    cin>>rollno>>name>>Class;
    for(int i=0;i<5;i++)
        cin>>marks[i];
    percentage=calculate();
}
void Student::displayMarks()
{
    cout<<"Details and marks are \n"<<rollno<<' '<<name<<' '<<Class<<' ';
    for(int i=0;i<5;i++)
        cout<<marks[i]<<' ';
    cout<<"\nPercentage is "<<percentage;
}

