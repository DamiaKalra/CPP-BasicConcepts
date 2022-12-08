#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
 void sum(int a,int b)
{
 int c;
	c=a+b;
	cout<<"Sum is "<< c<<endl;
}
void sub(int a,int b)
{
 int c;
	c=a-b;
	cout<<"Sub is "<< c<<endl;
}
void mul(int a,int b)
{
 int c;
	c=a*b;
	cout<<"mul is "<< c<<endl;
}
void div1(int a,int b)
{
 double c;
	c=(double)a/b;
	cout<<"div is "<< c<<endl;
}
main()
{
	int a,b;
	a=45;
	b=55;
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div1(a,b);
	
	return 0;
}

