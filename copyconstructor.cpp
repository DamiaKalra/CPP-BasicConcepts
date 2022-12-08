#include<iostream>
using namespace std;
class employee{
	int rollno;
	string name;
	public:
		//default constructor
		employee()
		{
			rollno=30;
			name="Kalra";
		}
		//parameterised constructor
    employee(int i,string n)
	{rollno=i;name=n;}
	//copy constructor
	employee(employee &e)
	{
		rollno=e.rollno;
		name=e.name;
	}
	void display()
	{cout<<"rollno "<<rollno<<" "<<"name "<<name<<" "<<endl;}
};
int main(void){
	employee e2(10,"Mishti");
	e2.display();
//	employee e1(e2);
//	e1.display();
//	employee e1(27,"Damia");
employee e4(90,"damia");
	e2.display();
	employee e3(e4);
	e3.display();
	}
								
	
	
