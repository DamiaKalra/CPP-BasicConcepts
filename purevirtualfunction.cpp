#include<iostream>
using namespace std;
//shape is parent class
class shape
{
	public:
	int areashape;
	shape(int areashape=0):areashape(areashape){
	}
 void display()	
{	
	cout<<"display of Shape "<<areashape<<endl;
	//cout<<"display of Circle"<<areacircle<<endl;
	//cout<<"display of  Rectangle"<<arearectangle<<endl;
}
};
class rectangle:public shape
{
	public:
	int arearectangle;
	rectangle(int areashape,int arearectangle):shape(areashape),arearectangle(arearectangle){
	}
	void display()	
{
	cout<<"display of  Rectangle "<<arearectangle<<endl;
}
};
class circle:public shape
{
		public:
		int areacircle;
		circle(int areashape,int areacircle):shape(areashape),areacircle(areacircle){
	}
	void display()	
{
	cout<<"display of Circle "<<areacircle<<endl;
}
};
main()
{
	circle c(6,2);
	c.display();
	rectangle r(3,7);
	r.display();
}
