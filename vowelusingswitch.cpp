#include <iostream>
using namespace std;
int main(){
	char ch='a';
	cout<<"enter an alphabet";
      cin>>ch;
    
	switch(ch){
	
		case 'a':
			cout<<"vowel";		
	        break;
	        	case 'e':
			cout<<"vowel";		
	        break;
	        	case 'i':
			cout<<"vowel";		
	        break;
	        	case 'o':
			cout<<"vowel";		
	        break;
	        	case 'u':
			cout<<"vowel";		
	        break;
	        default:
			cout<<"consonant";		
		break;	
	}
	return 0;
}
