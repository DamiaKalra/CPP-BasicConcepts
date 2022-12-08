#include<iostream>
using namespace std;
class bank
{
	int accno;
	string name;
	int amount;
	int d,w,c;
	public:
	static string bankname;
	bank(int a,string n,int am)
	{accno=a;name=n;amount=am;}
	//deposit
	void deposit(int d)
	{
		//cout<<"enter your deposit amount";
		//cin>>d;
		amount=amount+d;
	}
	//withdraw
	void withdraw(int w)
	{
		//cout<<"enter your withdraw amount";
		//cin>>w;
		//d=deposit
		//w=withdraw
		amount=amount-w;
	}
	void current()
	{
		cout<<"enter your current amount";
		cout<<amount;
	}
	//display current 
	void display()
	//{cout<<"deposit"<<d<<"withdraw"<<w<<"current"<<c<<endl;}
	{cout<<"\n"<<"Account no:"<<accno<<"\n"<<"Name:"<<name<<"\n"<<"Current amount:"<<amount<<endl;
	}
static void display1()
{
	cout<<bankname;
}
};
string bank::bankname="SBI";
int main(void){
	bank b(2010991526,"Damia Kalra",10000);
	int d,w;
	cout<<"enter your deposit amount";
	cin>>d;
	b.deposit(d);
 cout<<"enter your withdraw amount";
	cin>>w;
	b.withdraw(w);
	b.current();
	b.display();
	bank::display1();
}
