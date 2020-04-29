#include <iostream>

using namespace std;

class Applicant
{
    long int ano;
    char name[25],grade;
    float agg;
    void grademe()
    {
        if(agg>=80)
            grade='A';
        else if(agg>=65 && agg<80)
            grade='B';
        else if(agg>=50 && agg<65)
            grade='C';
        else if(agg<50)
            grade='D';
    }
public:
    void enter()
    {
        cout<<"Enter Details \n";
        cin>>ano>>name>>agg;
        grademe();
    }
    void result()
    {
        cout<<"Name and Admission no. \n"<<ano<<' '<<name<<"\nAggregate score and grade are ";
        cout<<agg<<' '<<grade;
    }
};
int main()
{
    Applicant e;
    e.enter();
    e.result();
    return 0;
}
