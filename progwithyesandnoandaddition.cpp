#include <iostream>
using namespace std;
int main()
 { 
   int number,a,num;
   char ch;
   a=1;
   
	do
	{
cout << "enter any number?" << endl;
	  cin >> number; 
	  if(number>0)
	  {
	  		num=number+num;
	  }
	  cout<<"Enter y for another number n for exit";
	  cin>>ch;
	}
	while(ch=='y');
		   return 0; 
	}
	
