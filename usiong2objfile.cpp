#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class studentinfo{
	int rollno;
	int marks;
public:
	studentinfo(int rollno=0,int marks=0):rollno(rollno),marks(marks){	
	}
	void display(){
		cout<<"rollno "<<rollno<<endl;
		cout<<"marks "<<marks<<endl;
	}	
};
main()
{
	//write
	studentinfo s1(1234,98);
	studentinfo s3(12343,97);
  s1.display();
  s3.display();
	ofstream fout("studentinfo2.dat",ios::binary|ios::app);
	fout.write((char*)&s1,sizeof(s1));
	fout.write((char*)&s3,sizeof(s3));
	fout.close();
	cout<<"file written successfully"<<endl;
	
	//read
	ifstream fin("studentinfo2.dat",ios::binary);
	while(fin.read((char*)&s3,sizeof(s3))){
	s3.display();
}
	//fin.close();
}                                                                                                                                                           
