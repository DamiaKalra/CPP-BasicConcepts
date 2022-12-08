#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	string name;
	float salary;
	employee(int id,string name,float salary)
	{
	this->id=id;
	this->name=name;
	this->salary=salary;
	}
	void display(){
	cout<<"id = "<<id<<" name = "<<name<<" salary ="<<salary<<endl;
}	
};
main(){
	employee e(1,"institute",2000.34);
	e.display();
}
