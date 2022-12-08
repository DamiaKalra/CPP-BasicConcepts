#include<bits/stdc++.h>
using namespace std;
class A{
public:
// constructor and destructor are called automatically,
//once the object is instantiated
//ios::out is used to see in write mode
fstream fout;
fstream fin;
	string name;
	int rollno;
A(){
fout.open("destructorfile.txt",ios::out|ios::app);
cout << "Constructor in use" << endl;
cout<<"enter name";
cin>>name;
cout<<"enter roll no";
cin>>rollno;
}
void write()
{
	fout<<"heylo"<<endl;
	fout<<name<<endl;
	fout<<rollno<<endl;
}
void read()
{
	fin>>name;
	fin>>rollno;
}
~A(){
cout << "Destructor in use" << endl;
fout.close();
}
};
int main(){
	{
A a;
a.write();
A b;
b.write();
}
return 0;
}
