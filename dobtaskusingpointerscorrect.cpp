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
	
};
struct student input(struct student *p)
{
	cout<<"enter roll no :";
	cin>>p->rollno;
		cout<<"enter name :";
			cin>>p->name;
			cout<<"enter percentage :";
				cin>>p->percentage;
				cout<<"enter marks :";
					   for(int i = 0; i < 5; i++) {
   cin>>p->marks[i];
   	}
   		cout<<"enter date :";
	cin>>p->b1.dd;
		cout<<"enter month :";
			cin>>p->b1.mm;
			cout<<"enter year :";
				cin>>p->b1.yy;
				return *p;
}
//display function
void display(struct student *p)
{
		cout<<"enter roll no :"<<p->rollno<<"\n";
		cout<<"enter name :"<<p->name<<"\n";
			cout<<"enter percentage :"<<p->percentage<<"\n";
				cout<<"enter marks :";
  for(int i = 0; i < 5; ++i) {
   cout<<p->marks[i]<<"\n";
   	}
   	cout<<"dob :"<<p->b1.dd<<"_"<<p->b1.mm<<"_"<<p->b1.yy<<"\n";
}
main()
{
	struct student s1;
	struct student *p;
	p=&s1;
	input(p);
	display(p);
}


