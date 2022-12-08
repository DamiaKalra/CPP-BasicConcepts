#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,5,8,9,12,45,68,18,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
