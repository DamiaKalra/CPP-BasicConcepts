
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"enter a number";
	cin>>a;
	d = 2;
for(;d <= 2; )
{
	c=a%10;
	cout<<c<<endl;
	a=a/10;
	d++;
	if(a == 0)
	{
		break;
	}
}
return 0;
}
