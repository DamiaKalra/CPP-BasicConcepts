#include<iostream>
using namespace std;
class shape
{
public:
	int lengthshape;
	shape(int lengthshape=0):lengthshape(lengthshape){
	}
virtual void display()	
{
	cout<<"display of length shape :"<<lengthshape<<endl;
}
};
class rectangle:public shape
{
public:
	public:
		int length;
		rectangle(int lengthshape,int lengthrectangle):shape(lengthshape),length(lengthrectangle){
	}
void display()	
{
	cout<<"display of length rectangle :"<<length<<endl;
	cout<<"display of length shape :"<<lengthshape<<endl;
	
}
};
main()
{
	shape *s;
	rectangle o(9,5);
	//o.displayS();
	//with the help of child object we can acces parent object
	s=&o;
	s->display();
}

