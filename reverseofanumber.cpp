#include<iostream>
using namespace std;
int main(){
	int n,a,ans;
	cout<<"enter n";
	cin>>n;
	ans=0;
	while(n!=0) 
 {
 	a=n%10;
 	ans=ans*10+a;
 	n=n/10;
}
cout<<ans<<endl;
return 0;
}

