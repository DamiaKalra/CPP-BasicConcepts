#include<iostream>
using namespace std;
int main(){
int n=0;
cin>>n;
int i=0;
int sq=0;
while(i*i<=n){
	sq=i;
	i++;
}
cout<<sq;
return 0;
}
