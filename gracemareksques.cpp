#include<iostream>
#include<conio.h>
using namespace std;
//input array
int* input(){
	static int a[5];
	cout<<"enter 5 numbers";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	return a;
}
//display array
void display(int *p)
{
	cout<<"\nArray is \n";
	for(int i=0;i<5;i++){
		cout<<*(p+i)<<"\t";
	}
}
//check grace
int* check(int *p)
{
	static int grace[5];
	for(int i=0;i<5;i++)
	{
		if(*(p+i)>=30&&*(p+i)<33)
		{
			grace[i]=33-*(p+i);
			*(p+i)=33;
		}
		else{
			grace[i]=0;
		}
	}
	return grace;
}
//main function
main(){
	int *p=input();
	cout<<"\n before update\n";
	display(p);
		int *g=check(p);
	cout<<"\n after update\n";
	display(p);
	cout<<"\n grace array\n";
	display(g);
	
}



