#include <iostream>
using namespace std;
int main(){
int i,a,n;
   i>=0;
	int num=0;
	
	for(int i; i<=3; i++)
	{
	cout<<"enternumber";
	cin>>a;
		if(a>0){
			num=a+num;
		}
		if(a<0)
		cout<<"end"<<endl;
	}
		cout<<num;
	return 0;
}
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
	                                                                                                   
