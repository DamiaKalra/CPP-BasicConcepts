#include<iostream>
using namespace std;
class A
{
	public:
	void displayA()	
{
	cout<<"display of A"<<endl;
}
};
class B:public A
{
	public:
	void displayB()	
{
	cout<<"display of B"<<endl;
}
};
class C: public A
{
		public:
	void displayC()	
{
	cout<<"display of C"<<endl;
}
};
class D:public B,public C
{
	public:
void displayD()	
{
	cout<<"display of D"<<endl;
}
};
main()
{
    D o;
    //scope resolution is used to solve the problem of averriding function as a is coming from b and c as d comfused which a to use
	o.C::displayA();
	o.displayB();
	o.displayC();
	o.displayD();
}
