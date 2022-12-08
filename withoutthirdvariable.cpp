#include <iostream>
using namespace std;
int main(){
	int i,c=0,j;
	for(i=2;i<=100;i++)
	{
		for(j=2;j<=i/2;j++)
		{
		if(i%j==0)
			break;
		}
		if(j==i/2+1){
		cout<<i<<endl;
		c++;
	}
}
cout<<"no of prime"<<c<<endl;
	return 0;
}
