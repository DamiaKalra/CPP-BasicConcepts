#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 100
const float PI=3.14;
void increment()
{
	static int i=1;
	cout<<i<<"\n";
	i++;
}
main()
{
	cout<<PI<<endl;
	increment();
	increment();
	increment();
}
