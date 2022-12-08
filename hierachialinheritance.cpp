//this is multiple not hierachial
#include<iostream>
using namespace std;
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
class D
{
		public:
	void displayD()	
{
	cout<<"display of D"<<endl;
}
};
class A:public D,public B,public C
{
	public:
void displayA()	
{
	cout<<"display of A"<<endl;
}
};
main()
{
	A o;
	o.displayA();
	o.displayB();
	o.displayC();
	o.displayD();
}

