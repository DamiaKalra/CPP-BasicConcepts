#include<iostream>
using namespace std;
int main(){
	//check palindrome
	int n;
	cin>>n;
	char arr[n];
	cin>>arr;
	bool check=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-1-i]){
			check=0;
			break;
		}
	}
	if (check==true)
	cout<<"word is a palindrome"<<endl;
	else{
		cout<<"word is not a palindrome"<<endl;
	}
	return 0;
}
