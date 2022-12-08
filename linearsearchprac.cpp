#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of the array";
    int n;
   cin>>n;
   int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      cout<<"enter the key u want to search";
    int k;
   cin>>k;
    for(int i=0;i<n;i++){
     if(arr[i]==k)
        {
           cout<<"key found at index "<<i;
           break;
        }
		}
	   return 0;
}
    
