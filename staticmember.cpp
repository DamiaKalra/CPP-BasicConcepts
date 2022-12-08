#include<iostream>
using namespace std;
class employee{
	int id;
	string name;
	float salary;
	public:
	static string institute;
	void insert(int i,string n, float s)
	{id=i;name=n;salary=s;}
	static void display()
	//{cout<<id<<" "<<name<<" "<<salary<<" "<<endl;}
	{
	cout<<institute;
    }
};
string employee::institute="PR3";
int main(void){
	//employee e1,e2;
	//e1.insert(27,"Damia",890065);
	//e2.insert(10,"Mishti",987654);
	//e1.display();
	//e2.display();
	//cout<<employee::institute<<endl;
	//cout<<e1.institute;
	employee::display();
	}
