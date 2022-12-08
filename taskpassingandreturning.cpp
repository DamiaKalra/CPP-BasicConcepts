#include<iostream>
using namespace std;
class rectangle{
	int length;
	int breath;
	public:
	//1st rectangle
rectangle(int l,int b)
	{length=l;breath=b;}
		void display()
	{cout<<"rectangle 1 : "<<"length = "<<length<<" "<<"breath = "<<breath<<endl;}
};
	class rectangle2{
	int length;
	int breath;
	public:
	//2nd rectangle
	rectangle2(int l,int b)
	{length=l;breath=b;}
	void display()
	{cout<<"rectangtle 2 : "<<"length = "<<length<<" "<<"breath = "<<breath<<endl;}
	friend void frienddisplay(sum s);
};
void frienddisplay(sum s)
{
cout<<"sum of both rectangle = "<<s.length+s.length<<s.breath+breath;
}
int main(void){
	rectangle r(2,3);
	rectangle2 r2(6,7);
	r.display();
	r2.display();
	frienddisplay();
	cout<<"\n";
	
}
	




