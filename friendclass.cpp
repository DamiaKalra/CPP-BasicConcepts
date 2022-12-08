#include<iostream>
using namespace std;
class Teacher;
class student
{
	int rollno;
	string name;
	public:
		student(int r=0,string n=""):rollno(r),name(n)
		{
		}
		void display()
		{
			cout<<"\nRollno is :"<<rollno;
			cout<<"\tName is :"<<name;
		}
			friend class Teacher;
	};
	class Teacher
	{
		int tid;
		string name;
		public:
		Teacher(int id=0,string n=""):tid(id),name(n)
		{
		}
		void display()
		{
			student s1(100,"tania");
			s1.rollno=900;
			s1.name="mishti";
			s1.display();
			cout<<"\nTeacher id is :"<<tid;
			cout<<"\tName is :"<<name;
		}
	};
		main(){
			Teacher t(3098,"damia");
			t.display();
		}
