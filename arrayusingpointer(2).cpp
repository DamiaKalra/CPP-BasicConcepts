#include<iostream>
#include<conio.h>
using namespace std;
main(){
int	arr[5]={1,2,4,5,8};
	int *p;
	p=&arr[0];
	int i;
	  for(int i=0;i<=4;i++){
   cout<<*(p+i)<<"\n";
}
return 0;
}
