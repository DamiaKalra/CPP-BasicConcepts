#include<iostream>
using namespace std;
main()
{
	cout<<"enter 2 numbers";
	int a,b,c;
	cin>>a>>b;
	try{
		if(b==0)
		throw "problem in 2nd number ";
		c=a/b;
		cout<<c<<endl;
	}
	catch(const char *p)
	{
		cout<<p;
	}
	cout<<"\n";
	cout<<"end of the program";
}
//default return type of main is int
