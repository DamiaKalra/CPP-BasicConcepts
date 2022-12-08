#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter alphabet";
	cin>>ch;
	if(ch>=65&&ch<=90)
	{
		cout<<"uppercase"<<endl;
	}
	else if(ch>=97&&ch<=122)
	{
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"invalid";
	}
	return 0;
}
