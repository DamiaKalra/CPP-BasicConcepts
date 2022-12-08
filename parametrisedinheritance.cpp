#include<iostream>
using namespace std;
class rectangle
{
public:
	int lengthrectangle;
	rectangle(int lengthrectangle=0):lengthrectangle(lengthrectangle){
	}
	void displayR()	
{
	cout<<"length of rectangle"<<lengthrectangle<<endl;
}
};
class rhombus:public rectangle
{
	public:
		int lengthrhombus;
		rhombus(int lengthrectangle=0,int lengthrhombus=0):rectangle(lengthrectangle),lengthrhombus(lengthrhombus){
	}
 	void displayL()	
{
	cout<<"length of rectangle "<<lengthrectangle<<endl;
	cout<<"length of rhombus "<<lengthrhombus<<endl;
}
};
main()
{
	rhombus o(4,5);
	//parent p;
	//p.displayP();
	o.displayL();
	//with the help of child object we can acces parent object
	//rectangle(lengthrectangle) here rectangle is written because class name is rectangle
	//lengthrhombus(lengthrhombus) here length is written because we are initiallising our own constructor
}
