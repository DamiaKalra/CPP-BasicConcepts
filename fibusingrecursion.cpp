#include<iostream>
using namespace std;
int fib(int n)
{
if(n<=1)
return 1;
return fib(n-1)+fib(n-2);
}
int main(){
	int n=10;
	int i=1;
	int a,b,c,nextTerm;
	for(int i=1;i<=n;i++){
		cout<<a<<endl;
		nextTerm=a+b;
		a=b;
		b=c;
		b=nextTerm;
	}
	cout<<fib(n)-1;
	return 0;
}

