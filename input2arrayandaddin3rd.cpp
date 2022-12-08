#include <iostream>
using namespace std;
int main(){	

	int n1,n2,a[n1],b[n2],sum[n1];
	cout<<"enter n1"<<endl;
	cin>>n1;
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
		cout<<"enter n2"<<endl;
		cin>>n2;
	for(int i=0;i<n2;i++){
			cin>>b[i];
		}
		for(int i=0;i<n1;i++){
		sum[i]=a[i]+b[i];
    	cout<<sum[i]<<endl;
    }
	return 0;  
}
