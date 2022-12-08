#include<iostream>
#include<conio.h>
using namespace std;
#define DEBUG
#define MIN(a,b)(((a)<(b))?a:b)
int main()
{
	int i,j;
	i=108970;
	j=345;
	#ifdef DEBUG
	cerr<<"Trace: inside main function"<<endl;
	#endif
	#if 0
	/*this is commented part*/
	cout<<MKSTR(HELLO C++)<<endl;
	#endif
	cout<<"The minimum is "<<MIN(i,j)<<endl;
	#ifdef DEBUG
	cerr<<"trace: coming out of main function"<<endl;
	#endif
}


























