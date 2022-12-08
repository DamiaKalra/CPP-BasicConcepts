#include<iostream>
using namespace std;
 main(){
	int a=3;
	try
	{
	if(a==1)throw a;//throwing integer exception
	else if(a==2)throw 'A';//throwing char ex
	else if(a==3)throw 8.98;//throwing float ex
    }
	catch(int a)
	{cout<<"integer ex caught "<<endl;}		
	catch(char ch)
	{cout<<"char ex caught "<<endl;}	
	catch(double d)
	{cout<<"double ex caught "<<endl;}	
	cout<<"end of the prog";
	return 0;
	} 

