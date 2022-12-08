#include<iostream>
using namespace std;
//structure
struct student
{
	int rollno;
	string name;
	float per;
	int marks[5];
};
//input function
struct student input()
{
	struct student s1;
	cin>>s1.name>>s1.rollno>>s1.per;
	return s1;
}
//display function
void display(struct student s1)
{
		cout<<s1.name<<s1.rollno<<s1.per;

}
//main function
main()
{
	struct student s1[5];
	   cout << "Enter information of students: " << endl; 
   for(int i = 0; i < 5; ++i) {
   	s1[i]=input();
   	}
   	   for(int i = 0; i < 5; ++i) {
display(s1[i]);
}
}


