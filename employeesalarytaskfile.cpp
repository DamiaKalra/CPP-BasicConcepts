#include<iostream>
#include<fstream>
using namespace std;
class employee
{
	string employeename;
	int employeeid;
	int TA;
	int DA;
	int salary;
	public:
	//paraetrised constructor
	employee (string employeename=" ", int employeeid=0,int TA=0,int DA=0,int salary=0):employeename(employeename),employeeid(employeeid),TA(TA),DA(DA),salary(salary){	
	}
	//input
	void input()
	{
    //ofstream fout("filehandeling.txt");
	//string s1;
	cout<<"enter employee name :";
	//getline(cin,name);
	cin>>employeename;
	//int s2;
	cout<<"enter employee id :";
	cin>>employeeid;
	cout<<"enter salary TA :";
	cin>>TA;
	cout<<"enter salaray DA :";
	cin>>DA;
	cout<<"enter salaray  :";
	cin>>salary;
	cout<<"successfully written";
}
//output
void output()
{
 ofstream fout("employeefile.txt",ios::app);
 cout<<endl;
	fout<<employeename<<endl;
	fout<<employeeid<<endl;
	fout<<TA<<endl;
	fout<<DA<<endl;
	fout<<salary<<endl;
	fout.close();
}
static void read(){
	ifstream fin("employeefile.txt");
	string employeename;
    int employeeid;
    int TA;
    int DA;
    int salary;
    while(fin>>employeename>>employeeid>>TA>>DA>>salary){
cout<<"employee name :"<<employeename<<endl;
cout<<"employee id :"<<employeeid<<endl;
cout<<"TA :"<<TA<<endl;
cout<<"DA :"<<DA<<endl;
cout<<"salary :"<<salary<<endl;
cout<<"total salary :"<<TA+DA<<endl;
	}
}
};
main()
{
employee E;
E.input();
E.output();
/*file A;
A.input();
A.output();*/
employee::read();
}














