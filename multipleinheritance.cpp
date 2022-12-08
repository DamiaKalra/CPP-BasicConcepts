#include<iostream>
using namespace std;
//multiple inheritance
class A
{
	public:
void displayA()	
{
	cout<<"display of A"<<endl;
}
};
class B
{
	public:
	void displayB()	
{
	cout<<"display of B"<<endl;
}
};
class C
{
	public:
	void displayC()	
{
	cout<<"display of C"<<endl;
}
};
class D:public A,public B,public C
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
	o.displayA();
	o.displayB();
	o.displayC();
	o.displayD();
}

