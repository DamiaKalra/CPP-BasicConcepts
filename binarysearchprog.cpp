#include<iostream>
using namespace std;
int binarySearch(int arr[], int n,int key){
	int s=0;
	int e=n;
	cout<<"index of the element which was searched"<<endl;
	while(s<=e){
		int mid=(s+e)/2;
		
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}		
	}
	return -1;
}

int main(){
	cout<<"enter the size of the array";
	int n;
	cin>>n;
	cout<<"now enter the elements of the array";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	  cout<<"enter the key u want to search";
	int key;
	cin>>key;
	cout<<binarySearch(arr,n,key)<<endl;
	return 0;
}
