#include<iostream>

using namespace std;

class student
{
	public:
	int rno;
	char name[20];
	void getdata()
	{
		cout<<"Enter RollNo ";
		cin>>rno;
		cout<<"Enter Name ";
		cin>>name;

	}

};
class marks : public student
{
	float m1,m2,m3,tot;
	float per;
	void calculate()
	{
	    tot=m1+m2+m3;
	    per=(tot/300)*100;
	}
public:
	void getmarks()
	{
		student::getdata();
		cout<<"Enter Marks 1 ";
		cin>>m1;
		cout<<"Enter Marks 2 ";
		cin>>m2;
		cout<<"Enter Marks 3 ";
		cin>>m3;
		calculate();
	}
	void display()
	{
		cout<<"Roll No "<<rno<<endl;
		cout<<"Name "<<name<<endl;
		cout<<"Marks 1 "<<m1<<endl;
		cout<<"Marks 2 "<<m2<<endl;
		cout<<"Marks3 "<<m3<<endl;
		cout<<"Total "<<tot<<endl;
		cout<<"Percentage "<<per<<endl;

	}
};
int main()
{
	marks std;
	std.getmarks();
	std.display();
}
