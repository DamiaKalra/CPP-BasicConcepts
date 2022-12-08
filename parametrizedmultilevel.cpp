#include<iostream>
using namespace std;
class grandparent
{
public:
int agegrandparent;
grandparent(int agegrandparent=0):agegrandparent(agegrandparent){
}
void displayGP()	
{
	//cout<<"display age of grandparent"<<endl;
}
};
//main line to implement inheritence
//child can access properties of parent but parent cannot
class parent:public grandparent
{
	public:
	int ageparent;
	parent(int agegrandparent=0,int ageparent=0):grandparent(agegrandparent),ageparent(ageparent){
	}
	void displayP()	
{
	//cout<<"display age of parent"<<endl;
}
};
class child:public parent
{
	public:
	int agechild;
	child(int agegrandparent=0,int ageparent=0,int agechild=0):parent(agegrandparent,ageparent),agechild(agechild){
	}
	void displayC()	
{
	cout<<"display age of grandparent"<<agegrandparent<<endl;
		cout<<"display age of parent"<<ageparent<<endl;
	cout<<"display age of child"<<agechild<<endl;
}
};
main()
{
	child c(90,70,30);
	//parent p;
	//p.displayP();
	c.displayGP();
	c.displayC();
	c.displayP();
	//with the help of child object we can acces parent object
}

