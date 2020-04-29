#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>
	//|||||||||||||||||||||||||||||||||
	//    class name : patient
	//|||||||||||||||||||||||||||||||||
class patient
{
	public:
	char name[20],add[40];
	char blood_group[5];
	int pat_id,marital_status;
	long int phn;
	int a;
	void patientdata();
	void showdata();
};
	//||||||||||||||||||||||||||||||||
	//    FUNCTIONS TO GET AND SHOW DATA
	//||||||||||||||||||||||||||||||||
void patient::patientdata()
{
	cout<<" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<" \n\n\t\tCreate New Patient Database\n ";
	cout<<" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"\nEnter Patient ID : ";
	cin>>pat_id;
	cout<<"\nEnter Patient Name : ";
	cin>>name;
	cout<<"\nEnter Patient Blood Group : ";
	cin>>blood_group;
	fflush(stdin);
	cout<<"\nEnter Patient Phone  : ";
	cin>>phn;
	cout<<"\nAddress : ";
	cin>>add;
}
void patient::showdata()
{
	cout<<"\nPatient ID\t: "<<pat_id;
	cout<<"\nPatient Name\t: "<<name;
	cout<<"\nBlood Group\t: "<<blood_group;
	cout<<"\nPatient Phone\t: "<<phn;
	cout<<"\nAddress : \t:"<<add;
	cout<<"\n\n";
}
	//||||||||||||||||||||||||||||||||||||||||||||||
	//Main Function
	//||||||||||||||||||||||||||||||||||||||||||||||
void main()
{
	clrscr();
	gotoxy(25,10);
	cout<<"\tWELCOME TO CITY HOSPITAL";

	gotoxy(50,50);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nPress Any Key to Continue";
	getch();
	clrscr();
	char s;
	patient obj;
	z:
	fstream f;
	f.open("patient",ios::in|ios::out|ios::app|ios::ate|ios::binary);
	cout<<"\n ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"\t\t\t  CITY HOSPITAL MANAGEMENT SOFTWARE \n";
	cout<<"\n ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"\n\t 1 .Enter a new patient information";
	cout<<"\n\t 2 .View detail of existing patient ";
	cout<<"\n\t 3 .Modify patient information";
	cout<<"\n\t 4 .Search Patient information";
	cout<<"\n\t 5 .Exit ";
	int a;
	cout<<"\n\n\n\tEnter your Choice:";
	f.seekg(0);
	cin>>a;
	char x;
	switch (a)
	{
	//|||||||||||||||||||||||||||||||||||||||||||||||
	//                 ADD A PATIENT RECORD
	//|||||||||||||||||||||||||||||||||||||||||||||||
		case 1:
		clrscr();
		fstream f;
		f.open("patient",ios::in|ios::out|ios::ate|ios::app|ios::binary);
		char ans;
		obj.patientdata();
		f.write((char *)&obj,sizeof(obj));
		getch();
		cout<<"Do You Want To Continue? y/n  :";
		ans=getchar();
		if(ans=='Y' || ans=='y')
		goto z;
		else
		break;
//||||||||||||||||||||||||||||||||||||||||||||||||||||
//    CASE       : 2
//    DETAILS    : TO SHOW ALL patient RECORDS
//||||||||||||||||||||||||||||||||||||||||||||||||||||
		case 2:
		{

			cout<<"\n\n";
			fstream f;
			f.open("patient",ios::in|ios::out|ios::ate|ios::app|ios::binary);
// cout<<"\n\n";
			char ans;
			f.seekg(0);
			int ctr=0;
			while(f.read((char *)&obj,sizeof(obj)) )
			{
				ctr=ctr+1;
				if(ctr==8)
				{
					getchar();
					clrscr();
					ctr=0;
				}
				obj.showdata();
				if(f.eof()==1)
				{
				break;
				}
			}
			f.close();
			cout<<"Do You Want To Continue? y/n :";
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			goto z;
			else
			{
			exit(1);
			}
		}
		break;
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//                           Case 3
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		case 3:
		{
			clrscr();
// char ans;
			fstream f;
			patient obj;
			char name[20];
			char blood_group[5];
			long int phn;

			int pat_id;
			f.open("patient",ios::in|ios::binary);
			cout<<"\n";
			cout<<"\n ||||||||||||||||||||||||||||||||||||||||||||\n";
			cout<<"\n                  Modify Patient  Database       \n";
			cout<<"\n ||||||||||||||||||||||||||||||||||||||||||||\n";
			cout<<"\n Enter Patient Name  :";
			cin>>name;
			do
			{ 	f.read((char *)&obj,sizeof(obj));
				if(f.eof()==1) {break;}
				if(strcmp(obj.name,name)==0)
				{
				cout<<"\n\tPatient Name :"<<obj.name;
				cout<<"\n\tPatient ID : "<<obj.pat_id;
				cout<<"\n\tBlood Group :"<<obj.blood_group;
				cout<<"\n\tPatient Phone :" <<obj.phn;
				getchar();
				cout<<endl;
				cout<<endl;
				cout<<"\n \t      Enter New Database" ;
				cout<<"\n\n\tEnter  Patient name : ";
				cin>>name;
				cout<<"\n\tEnter Patient ID : ";
				cin>>pat_id;
				cout<<"\n\tBlood Group  : ";
				cin>>blood_group;
				cout<<"\n\tEnter Patient Phone :";
				cin>>phn;
				cout<<"\n\n";
				strcpy(obj.name,name);
				strcpy(obj.blood_group,blood_group);
				obj.a=a;
				int l=f.tellg();
				f.close();
				f.open("patient",ios::out|ios::binary|ios::ate);
				f.seekg(l-sizeof(obj));
				f.write((char *)&obj,sizeof(obj));
				}
			}while(f);
			f.close();
			cout<<"Do You Want To Continue?y/n :";
			ans=getchar();
			if(ans=='Y'||ans=='y')
			{goto z;}
			else
			break;
		}
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//            Case 4    Searching The Patient From Database
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		case 4:
		{
			clrscr();
// char ans;
			fstream f;
			patient obj;
			char name[20];
			char blood_group[5];
			long int phn;
			int pat_id;
			f.open("patient",ios::in|ios::binary);
			cout<<"\n";
			cout<<"\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
			cout<<"\n                  Search Patient  Database       \n";
			cout<<"\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
			cout<<"\n Enter Patient Name  :";
			cin>>name;
			do
			{ f.read((char *)&obj,sizeof(obj));
			if(f.eof()==1) {break;}
			if(strcmp(obj.name,name)==0)
			{
				cout<<"\n\tPatient Name :"<<obj.name;
				cout<<"\n\tPatient ID : "<<obj.pat_id;
				cout<<"\n\tBlood Group :"<<obj.blood_group;
				cout<<"\n\tPatient Phone :" <<obj.phn;
				getchar();
				cout<<endl;
				strcpy(obj.name,name);
				strcpy(obj.blood_group,blood_group);
				obj.a=a;
				int l=f.tellg();
				f.close();
				f.open("patient",ios::out|ios::binary|ios::ate);
				f.seekg(l-sizeof(obj));
//f.write((char *)&obj,sizeof(obj));
			}
			else
			{
				cout<<"\n\n\Patient Does Not Exist\n\n\n";
			}
		}while(f);
		f.close();
		cout<<"\n\nDo You Want To Continue?y/n :";
		ans=getchar();
		if(ans=='Y'||ans=='y')
		{goto z;}
		else
		break;
		}
	/*    Exit  */
		case 5:
		{
			exit(1);
		}
		default:
		{
		cout<<"\n\tWrong input \n";
		}
	cout<<"\n\tDo You Want To Continue?y/n :";
	ans=getchar();
	clrscr();
	if(ans=='Y'||ans=='y')
	{goto z;}
	else
	break;
	}
	getch();
}

