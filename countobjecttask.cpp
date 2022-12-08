#include<iostream>
using namespace std;
class object{
   
	static int created;
	public:
	object()
	{
	created++;
	}
	static void display()
	{
	cout<<"objects created are : "<<created;
	}
};
int object::created=0;
main(){
	object o1;
	object o2;
	object o3;
	object o4;
	object o5;
	object::display();
}

