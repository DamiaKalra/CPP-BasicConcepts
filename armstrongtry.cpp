#include<iostream>
using namespace std;

int main(){
	
	int n,i,sum;
	sum=0;
	cout<<"enter a number";
	cin>>n;
	while(i>0)
	{
	i=n%10;
	sum=i*i*i;
	n=n/10;
}
   cout<<sum<<endl;

	if(sum==n)	{
	cout<<n<<" is armstrong";
	}
	else{
	cout<<n<<" is not armstrong";
	}
return 0;
}
