#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number";
      cin>>n;
      
     if(n%100==0&&n%400==0){
    	cout<<"leap year"<<endl;
    	
	}
	else if(n%4==0&& n%100!=0){
	cout<<"leap year"<<endl;
}
else
{
	cout<<"No";
}
	
	return 0;
}

