#include<iostream>
using namespace std;
template<class T>
void sum(T a,T b)
{
	cout<<"addititon is "<<a+b<<"\n";
}
main()
{
	sum(10,20);
	sum(20.9,89.9);
}
