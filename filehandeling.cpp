#include<iostream>
#include<fstream>
using namespace std;
main()
{
	
	/*ofstream fout("filehandeling");
	string s1;
	cout<<"enter your name :";
	getline(cin,s1);
	fout<<s1;
	cout<<"successfully written";*/
	
	ifstream fin("filehandeling");
	string s1;
	getline(fin,s1);
	cout<<s1;
}
