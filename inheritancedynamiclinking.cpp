#include<iostream>
using namespace std;
class person
{
public:
	string nameperson;
	person(string nameperson=""):nameperson(nameperson){
	}
//pure virtual function
virtual void display()=0;
};
class student:public person
{
public:
	public:
		int rollno;
		student(string nameperson,int rollnostudent):person(nameperson),rollno(rollnostudent){
	}
void display()	
{
	cout<<"display of student rollno :"<<rollno<<endl;
	cout<<"display of person :"<<nameperson<<endl;
	
}
};
main()
{
	//person p1;
	//abstract classes cant have objects 
	person *p;
	student o("Damia",5);
	//o.displayS();
	//with the help of child object we can acces parent object
	p=&o;
	p->display();
}
