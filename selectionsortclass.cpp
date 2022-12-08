#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	int i,j,z=0,arr[i];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(arr[j]<arr[i]){
				z=arr[j];    //a=b
				arr[j]=arr[i];     //b=c   
				arr[i]=z;       //c=a
				}
			}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
    }
			return 0;
		}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
