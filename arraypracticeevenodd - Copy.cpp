#include <iostream>
using namespace std;
int main(){	

int n1,i;
cout<<"enter n1"<<endl;
cin>>n1;
int a[n1],even[n1],odd[n1],e=0,o=0;
  for(i=0;i<n1;i++){
	cin>>a[i];
}
 cout<<"even"<<endl;
      for(i=0;i<n1;i++){
	if(a[i]%2==0){
		even[e++]=a[i];
	}
	else
	{
		odd[o++]=a[i];
	}
}
for(i=0;i<e;i++){
	cout<<even[i]<<endl;
}
cout<<"odd"<<endl;
for(i=0;i<o;i++){
	cout<<odd[i]<<endl;
}
return 0;
}
