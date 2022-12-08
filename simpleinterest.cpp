#include <iostream>
using namespace std;
int main(){
	int p;
	cout<<"Input principle:";
	cin>>p;
		int t;
	cout<<"Input time:";
	cin>>t;
	float amount;
	if(p>10000){
	 amount=(p*15*t)/100.0;
	 cout<<amount<<endl;
}
else
{
		 amount=(p*10*t)/100.0;
		 cout<<amount<<endl;
}
	return 0;
}
