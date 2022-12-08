#include<iostream>
using namespace std;
class grandparent
{
public:
		grandparent()
	{
	cout<<"default constructor of grandparent"<<endl;	
	}
void displayGP()	
{
	cout<<"display of grandparent"<<endl;
}
};
//main line to implement inheritence
//child can access properties of parent but parent cannot
class parent:public grandparent
{
	public:
			parent()
	{
	cout<<"default constructor of parent"<<endl;	
	}
	void displayP()	
{
	cout<<"display of parent"<<endl;
}
};
class child:public parent
{
	public:
	child()
	{
	cout<<"default constructor of child"<<endl;	
	}
	void displayC()	
{
	cout<<"display of child"<<endl;
}
};

main()
{
	child c;
	c.displayGP();
	c.displayC();
	c.displayP();
	//with the help of child object we can acces parent object
}

