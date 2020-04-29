#include <iostream>
#include <fstream>

using namespace std;

ofstream Y;
fstream f;

class Teacher
{
    int tcode;
    char name[25];
    char dob[25];
    char subject[25];
public:
    void getDetails()
    {
        cout<<"Enter Teacher code, Teacher Name, Date of birth and Subject\n";
        cin>>tcode>>name>>dob>>subject;
    }
    void dispDetails()
    {
        cout<<tcode<<"\t\t"<<name<<"\t\t"<<dob<<"\t"<<subject<<"\t\t\n";
    }
    int retCode()
    {
        return tcode;
    }
};
void addTeacher(Teacher &t)
{
    char ch='Y';
    while(ch=='y' || ch=='Y')
    {
        f.open("Teachers.dat",ios::binary|ios::app|ios::out);
        t.getDetails();
        f.write((char*)&t,sizeof(t));
        f.close();
        cout<<"\nDo you want to add another Teacher?\n";
        cin>>ch;
    }
}

void viewTeachers(Teacher &t)
{
    cout<<"\nCode \t\tName \t\tDOB \t\tSubject \n";
    f.open("Teachers.dat",ios::binary|ios::in);
    while((f.read((char*)&t,sizeof(t))))
        t.dispDetails();
    f.close();
}

void delTeacher(Teacher &t)
{
    int x;
    cout<<"Enter the code of the teacher you want to delete\n";
    cin>>x;
    Y.open("temp1.dat",ios::binary);
    f.open("Teachers.dat",ios::binary|ios::in);
    while((f.read((char*)&t,sizeof(t))))
        if(t.retCode()!=x)
            Y.write((char*)&t,sizeof(t));
    f.close();
    Y.close();
    remove("Teachers.dat");
    rename("temp1.dat","Teachers.dat");
}

void modifyTeacher(Teacher &t)
{
    char ch;
    int x;
    viewTeachers(t);
    cout<<"Enter the code of the teacher you want to modify\n";
    cin>>x;
    f.open("Teachers.dat",ios::binary|ios::in|ios::out);

    while((f.read((char*)&t,sizeof(t))))
    {
        if(t.retCode()==x)
        {
            t.dispDetails();
            cout<<"Modify this record?\n";
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                t.getDetails();
                f.seekp(f.tellg() - sizeof(t));
                f.write((char*)&t,sizeof(t));
            }
        }

    }
    f.close();
}

int main()
{
    int x;
    Teacher t;
    cout<<"1. Add record \n";
    cout<<"2. Delete record \n";
    cout<<"3. Modify record \n";
    cout<<"4. View all records \n";
    char choose='Y';
    while(choose=='Y' || choose=='y')
    {
        cout<<"Enter one of the options \n";
        cin>>x;
        switch(x)
        {
        case 1:
            addTeacher(t);
            break;
        case 2:
            delTeacher(t);
            break;
        case 3:
            modifyTeacher(t);
            break;
        case 4:
            viewTeachers(t);
            break;
        default:
            cout<<"\nOOps! You need to select a VALID option!\n";
        }
        cout<<"\nDo you want to perform another operation on Your records??\n";
        cin>>choose;
    }

    return 0;
}
