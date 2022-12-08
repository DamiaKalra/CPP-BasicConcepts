#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"enter four numbers";
      cin>>a;
         cin>>b;
            cin>>c;
               cin>>d;
               
    	if(a>b&&a>c&&a>d){
		cout<<"a is greater"<<endl;
	}
		else if(b>c&&b>d){
		cout<<"b is greater"<<endl;
	}
		else if(c>>d){
		cout<<"c is greater"<<endl;
	}
		else{
		cout<<"d is greater"<<endl;
	}
	return 0;
}
