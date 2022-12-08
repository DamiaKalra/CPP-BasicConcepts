#include <iostream>
using namespace std;
int main(){
	int a;
    cin>>a;
    
	if(a>80){
		cout<<"A Grade"<<endl;
	}
	else if(a>70){
			cout<<"B Grade"<<endl;
	}
	else if(a>60){
			cout<<"C Grade"<<endl;
	}
	else{
		cout<<"Fail"<<endl;
	}
	return 0;
}

