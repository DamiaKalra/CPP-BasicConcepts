#include<iostream>
using namespace std;
class rectangle{
	//public:
int length;
int breath;
public:
//1st rectangle
rectangle(int l=0,int b=0)
{length=l;breath=b;}
void display(){
	cout<<"length = "<<length<<" breath = "<<breath<<endl;
}
//subtraction
	rectangle operator-(rectangle r2)
	{
	rectangle r;
	r.length=this->length-r2.length;
	r.breath=this->breath-r2.breath;
	return r;
	}
	//multiplication
	rectangle operator*(rectangle r2)
	{
	rectangle r;
	r.length=this->length*r2.length;
	r.breath=this->breath*r2.breath;
	return r;
	}
	//uniary operator
	void operator++()
	{
	this->length+=2;
	this->breath+=2;
	}	
};
int main(void){
	rectangle r1(5,9);
	rectangle r2(2,4);
	cout<<"rectangle 1"<<endl;
	++r1;
	r1.display();
	cout<<"rectangle 2"<<endl;
	r2.display();
	rectangle r;
	r=r1-r2;
	cout<<"final rectangle subtraction"<<endl;
	r.display();
	r=r1*r2;
	cout<<"final rectangle multiplication"<<endl;
	r.display();
	//++r1;
	//cout<<"final rectangle "<<endl;
	//r.display();
	cout<<"\n";
}





