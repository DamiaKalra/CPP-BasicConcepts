#include<iostream>
using namespace std;
//structure dob
struct dob
{
	int dd;
	int mm;
	int yy;
};
//structure student
struct student
{
	int rollno;
	string name;
	float percentage;
	int marks[5];
	struct dob b1;
	//input function
	void input()
{
	cout<<"enter roll no :";
	cin>>rollno;
		cout<<"enter name :";
			cin>>name;
			cout<<"enter percentage :";
				cin>>percentage;
				cout<<"enter marks :";
					   for(int i = 0; i < 5; i++) {
   cin>>marks[i];
   	}
   		cout<<"enter date :";
	cin>>b1.dd;
		cout<<"enter month :";
			cin>>b1.mm;
			cout<<"enter year :";
				cin>>b1.yy;
}
//display function
void display()
{
		cout<<"enter roll no :"<<rollno<<"\n";
		cout<<"enter name :"<<name<<"\n";
			cout<<"enter percentage :"<<percentage<<"\n";
				cout<<"enter marks :";
  for(int i = 0; i < 5; ++i) {
   cout<<marks[i]<<"\n";
   	}
   	cout<<"dob :"<<b1.dd<<"_"<<b1.mm<<"_"<<b1.yy<<"\n";
}
};
main()
{
	struct student s;
	s.input();
	s.display();
}
