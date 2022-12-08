#include<iostream>
using namespace std;
class A
{
	protected:
	int a;
	public:
	A(int a=0):a(a){
	}
	void displayA()	
{
	cout<<a<<endl;	
}
};
class B:public virtual A
{
	protected:
	int b;
	public:
	B(int b=0):b(b){
	}
	void displayB()	
{
	cout<<a<<endl;
	cout<<b<<endl;
}
};
class C:public virtual A
{
	protected:
	int c;
	public:
	C(int c=0):c(c){
	}
	void displayC()	
{
	cout<<c<<endl;
	cout<<a<<endl;
}
};
class D:public B,public C
{
	int d;
	public:
	D(int d=0,int b=0,int c=0):B(b),C(c),d(d){
	}
void displayD()	
{
	//cout<<"display of D"<<endl;
	cout<<d<<endl;
	cout<<c<<endl;
	cout<<b<<endl;
	cout<<B::a<<endl;
	cout<<C::a<<endl;
	//cout<<B::a<<endl;
}
};
main()
{
    //B o(2,3);
    //C o1(5,7);
    //scope resolution is used to solve the problem of averriding function as a is coming from b and c as d comfused which a to use
	//o.C::displayA();
	D o2(1,2,3);
	//o2.B::displayA();
	//o2.C::displayA();
	o2.displayD();
}
