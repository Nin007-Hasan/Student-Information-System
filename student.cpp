#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include<fstream>
using namespace std;

struct student
{


	//student
	unsigned int student_id;
	char student_name[20];
	char department[30];
};

struct instructor
{
    long int instructor_id;
    char instructor_name[20];
    char department[30];
};

struct course_student
{
    long int student_id;
    long int course_id;
    char semester[20];
    long int year;
    char grade[20];
};

struct course_instructor
{
    long int instructor_id;
    long int course_id;
    char semester[20];
    long int year;
};

//student
int n = 0;
struct student stu[100];
struct student *p;

//instructor
int m=0;
struct instructor ins[100];
struct instructor *q;

//course_student;
int o=0;
struct course_student couStu[100];
struct course_student *r;

//course_instructor
int l=0;
struct course_instructor couIns[100];
struct course_instructor *s;

//main menu
void searchMenu();
void InputMenu();
void SaveToFile();

//search menu
void SearchStu();
void SearchIns();
void SearchCou();

//input menu

void newstu();
void newinstruc();
void newcours();
void newcourseid();

void InputStuInfo();
void ChenkStuInfo();
void QueryStuInfo();
void DeleteStuInfo();
void ModifyStuInfo();

int main()
{
	int index;
		cout << endl;
	cout << "+---------------------------------------------+" << endl << endl;;
	cout << "|-- Students' Information Management System --|" << endl << endl;
	cout << "+---------------------------------------------+" << endl;
	cout << endl;

	do {
		cout << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   +----------------MENU----------------+" << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   + [1]---Search  +" << endl;
		cout << "   + [2]---Enter new Information  +" << endl;
		cout << "   + [3]---Save To File  +" << endl;
		cout << "   + [0]---Exit System +" << endl;
		cout << endl << "Please input your choice : ";
		cin >> index;
		switch(index)
		{
		//case 0: break;
		case 1: searchMenu(); break;
		case 2: InputMenu(); break;
		case 3: SaveToFile(); break;
		case 0: break;
		//case 5: ModifyStuInfo(); break;
		default: cout << "Invalid Option!!!" << endl << endl << endl << endl << endl;
		}
	}while (index != 0);

	return 0;
}

	/*do {
		cout << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   +----------------MENU----------------+" << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   + [1]---Input students' Information  +" << endl;
		cout << "   + [2]---Check students' Information  +" << endl;
		cout << "   + [3]---Query students' Information  +" << endl;
		cout << "   + [4]---Delete students' Information +" << endl;
		cout << "   + [5]---Modify students' Information +" << endl;
		cout << "   + [0]---Exit System                  +" << endl;
		cout << endl << "Please input your choice : ";
		cin >> index;
		switch(index)
		{
		case 0: break;
		case 1: InputStuInfo(); break;
		case 2: ChenkStuInfo(); break;
		case 3: QueryStuInfo(); break;
		case 4: DeleteStuInfo(); break;
		case 5: ModifyStuInfo(); break;
		default: cout << "Invalid Option!!!" << endl << endl << endl << endl << endl;
		}
	}while (index != 0);

	return 0;
}*/

//Search Menu
void searchMenu()
{
    int searchIndex;
    do {
		cout << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   +----------------SEARCH MENU----------------+" << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   + [1]---Search by Student  +" << endl;
		cout << "   + [2]---Search by Instructor  +" << endl;
		cout << "   + [3]---Search by Course  +" << endl;

		cout << endl << "Please input your choice : ";
		cin >> searchIndex;
		switch(searchIndex)
		{
		//case 0: break;
		case 1: SearchStu(); break;
		case 2: SearchIns(); break;
		case 3: SearchCou(); break;
		//case 4: DeleteStuInfo(); break;
		//case 5: ModifyStuInfo(); break;
		default: cout << "Invalid Option!!!" << endl << endl << endl << endl << endl;
		}
	}while (searchIndex != 0);

	//return 0;
}

//Search Menu Implementation
void SearchStu()
{

}

void SearchIns()
{

}

void SearchCou()
{

}


//Input Menu
void InputMenu()
{
    int addNew;

    do {
		cout << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   +----------------Input MENU----------------+" << endl;
		cout << "   +------------------------------------+" << endl;
		cout << "   + [1]---Enter new student  +" << endl;
		cout << "   + [2]---Enter new instructor  +" << endl;
		cout << "   + [3]---add new course for student  +" << endl;
		cout << "   + [4]---add instructor for a course_id +" << endl;
		cout << endl << "Please input your choice : ";
		cin >> addNew;
		switch(addNew)
		{
		case 0: break;
		case 1: newstu(); break;
		case 2: newinstruc(); break;
		case 3: newcours(); break;
		case 4: newcourseid(); break;
		default: cout << "Invalid Option!!!" << endl << endl << endl << endl << endl;
		}
	}while (addNew != 0);

	//return 0;


}

//Input menu implementation

void newstu()
{
    int index;
    FILE *fp;

    ofstream fout;
    fp = fopen("student.txt","ab+");
	if(n == 0)
		p = stu;

        fflush(stdin);
	do {
		cout << endl << "+-------------------------+" << endl;
		cout << "Please input student ID : ";
		cin >> p->student_id;
		fout<<p->student_id;
		//gets(p->student_id);
		//scanf("%ld",&stu.student_id);

		cout << "Please input student name : ";
		cin >> p->student_name;
		fout<<p->student_name;
		//gets(stu.student_name);
		cout << "Please input depertment : ";
		cin >> p->department;
		fout<<p->department<<endl;
		//gets(stu.department);

		n++;

		fwrite(&stu, sizeof(stu), 1, fp);
		cout << "+-------------------------+" << endl;
		cout << "1. Continue input." << endl;
		cout << "2. End input." << endl << endl;
		cout << "Please choice : ";
		cin >> index;
		fout.close( );
		p++;
	}while(index == 0);

	cout << "Note: Finished input! There is " << n << " students." << endl << endl << endl << endl << endl;
	//fclose(fp);
	//cout
	       //close file
     //assert(!fout.fail( ));
	return;

}

void newinstruc()
{
    int index;
    fp = fopen("instructor.txt","ab+");
	if(m == 0)
		q = ins;
	do {
		cout << endl << "+-------------------------+" << endl;
		cout << "Please input instructor ID : ";
		cin >> q->instructor_id;
		fout<< q->instructor_id;
		cout << "Please input instructor name : ";
		cin >> q->instructor_name;
		fout<<q->instructor_name;
		cout << "Please input department : ";
		cin >> q->department;
		fout<< q->department;

		m++;
		//q++;
		cout << "+-------------------------+" << endl;
		cout << "1. Continue input." << endl;
		cout << "2. End input." << endl << endl;
		cout << "Please choice : ";
		cin >> index;
        fout.close( );
		q++;
	}while(index == 1);

	cout << "Note: Finished input! There is " << m << "Instructors." << endl << endl << endl << endl << endl;

}
void newcours()
{
    int index;
    fp = fopen("student_course.txt","ab+");
	if(o == 0)
		r = couStu;
	do {
		cout << endl << "+-------------------------+" << endl;
		cout << "Please input student ID : ";
		cin >> r->student_id;
		fout<<r->student_id;
		cout << "Please input course id  : ";
		cin >> r->course_id;
		fout<<r->course_id;
		cout<<"Please input Semester :";
		cin>>r->semester;
		fout<<r->semester;
		cout<<"Please input year :";
		cin>>r->year;
		fout<<r->year;
		cout << "Please input grade : ";
		cin >> r->grade;
		fout<<r->grade;

		o++;
		//r++;
		cout << "+-------------------------+" << endl;
		cout << "1. Continue input." << endl;
		cout << "2. End input." << endl << endl;
		cout << "Please choice : ";
		cin >> index;
        fout.close( );
		r++;
	}while(index == 1);

	cout << "Note: Finished input! There is " << o << "students." << endl << endl << endl << endl << endl;


}
void newcourseid()
{
    int index;
    fp = fopen("instructor_course.txt","ab+");
	if(l == 0)
		s = couIns;
	do {
		cout << endl << "+-------------------------+" << endl;
		cout << "Please input instructor ID : ";
		cin >> s->instructor_id;
		fout<<s->instructor_id;
		cout << "Please input course id  : ";
		cin >> r->course_id;
		fout<,r->course_id;
		cout<<"Please input Semester :";
		cin>>r->semester;
		fout<<r->semester;
		cout<<"Please input year :";
		cin>>r->year;
		fout<<r->year;


		o++;
		r++;
		cout << "+-------------------------+" << endl;
		cout << "1. Continue input." << endl;
		cout << "2. End input." << endl << endl;
		cout << "Please choice : ";
		cin >> index;
        fout.close( );
		s++;
	}while(index == 1);

	cout << "Note: Finished input! There is " << s << "students." << endl << endl << endl << endl << endl;


}






void SaveToFile()
{
    //cout << "Note: File has been saved "<< endl << endl << endl << endl << endl;;
    printf("Hello");
}


