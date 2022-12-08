#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream fout;
	char ch;
	fout.open("getputfile.txt");
	do{
	cin.get(ch);
	fout.put(ch);
	}
	while(ch!='a');
	fout.close();
	cout<<"\ndata written succesfully...";
	fstream fin;
	fin.open("getputfile.txt");
	cout<<"\ndata in file";
	//eof stands for end of file
	while(!fin.eof()){
	fin.get(ch);
	cout<<ch;
	}
	fin.close();
	return 0;
}









