#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
using namespace std;
class student
{
	int rollno;
	char name[50];
	int phymarks, chemmarks, mathmarks, engmarks, csmarks;
	float per;
	char grade;
	public:
	void getdata()
	{
	cout<<"\nEnter roll number of student ";
	cin>>rollno;
	cout<<"\n\nEnter Name of student ";
	gets(name);
	cout<<"\nEnter marks in physics out of 100 : ";
	cin>>phymarks;
	cout<<"\nEnter marks in chemistry out of 100 : ";
	cin>>chemmarks;
	cout<<"\nEnter marks in maths out of 100 : ";
	cin>>mathmarks;
	cout<<"\nEnter marks in english out of 100 : ";
	cin>>engmarks;
	cout<<"\nEnter marks in computer science out of 100 : ";
	cin>>csmarks;
	per=((phymarks+chemmarks+mathmarks+engmarks+csmarks)/310)*100;
}
void showdata()
{
	cout<<"\nRoll number of student : "<<rollno;
	cout<<"\nName of student : "<<name;
	cout<<"\nMarks in Physics : "<<phymarks;
	cout<<"\nMarks in Chemistry : "<<chemmarks;
	cout<<"\nMarks in Maths : "<<mathmarks;
	cout<<"\nMarks in English : "<<engmarks;
	cout<<"\nMarks in Computer Science :"<<csmarks;
	cout<<"\nPercentage of student is  :"<<per;
}
void main()
{
	char ch;
	clrscr();
	do
	{
		clrscr();
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. RESULT MENU";
		cout<<"\n\n\t02. ENTRY/EDIT MENU";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-3) ";
		cin>>ch;
		clrscr();
		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_menu();
				break;
			case '3':
				break;
		}
	}while(ch!='3');
	return 0;
}
void write_student()
{
	student st;
	ofstream fout;
	fout.open("student.dat",ios::binary|ios::app);
	st.getdata();
	fout.write((char *) &st, sizeof(student));
	fout.close();
	cout<<"\n\nStudent record Has Been Created ";
	getch();
}
void display_all()
{
	student st;
	ifstream fin;
	fin.open("student.dat",ios::binary);
	if(!fin)
	{
		cout<<"File could not be open !! Press any Key...";
		getch();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(!fin.eof())
	{
		st.showdata();
		cout<<"\n\n====================================\n";
	}
	fin.close();
	getch();
}
void result()
{
	char ch;
	int rno;
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice (1/2/3)? ";
	cin>>ch;
	clrscr();
	switch(ch)
	{
	case '1' :class_result(); break;
	case '2' :cout<<"\n\n\tEnter Roll Number Of Student : ";
		  cin>>rno;
		  break;
	case '3' :break;
	}
}
void entry_menu()
{
	char ch;
	int num;
	clrscr();
	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
	cin>>ch;
	clrscr();
	switch(ch)
	{
	case '1':	write_student(); break;
	case '2':	display_all(); break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			display_sp(num); break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			modify_student(num);break;
	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			delete_student(num);break;
	case '6':	break;
	default:	entry_menu();
	}
}
