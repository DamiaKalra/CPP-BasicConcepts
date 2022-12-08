#include<iostream>
using namespace std;
class circle{
	int radius;
	public:
			static float pi;
		//default constructor
		circle()
		{
			radius=5;
		}
	circle(int r)
	{radius=r;}
	//area
	void area()
	{
		int a=3.14*radius*radius;
		cout<<"area is "<<a<<endl;
	}
	//parameter
		void parameter()
	{
		int p=2*3.14*radius;
		cout<<"parameter is "<<p;
	}
	//copy constructor
		circle(circle &r)
	{
		radius=r.radius;
	}
	 void display()
	{cout<<"radius "<<radius<<" "<<pi<<endl;}
};
float circle::pi=3.14;
int main(void){
	/*//parameter
	circle r(2);
	r.display();
	r.area();
	r.parameter();
	cout<<"\n";
	//default
	circle r1;
	r1.display();
	//copy
	circle r(10);
	r.display();
	circle c(r);
	c.display();*/
	//static
	circle r;
	//scope resolution operator
	cout<<circle::pi<<endl;
	//calling by object
	cout<<r.pi;
	}
