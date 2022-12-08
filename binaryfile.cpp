//newcode
#include<iostream>
#include<fstream>
using namespace std;
class write
{
	public:
		char name[20];
//    	ofstream fout("studentinfo1.dat",ios::in|ios::binary);
    	getdata()
    	{
    		for(int i=0;i<=3;i++)
    		{
				cout<<"enter a name";
				cin>>name;
				storedata();
			}	
			
			//fout.close();
		}
		storedata()
		{
			ofstream file("01.bat",ios::app | ios::binary);
			file.write((char*)this,sizeof(*this));
			file.close();
		}
	    showdata()
	    {
	    	cout<<name<<endl;
		}
		display()
		{
			ifstream file("01.bat",ios::in | ios::binary);
			while(file.read((char*)this,sizeof(*this)))
			{
				showdata();
			}
		}
	
};
/*void update(const char* file1,const char file2)
{
	rename(file1,file2)
}*/
main()
{
	write w;
	w.getdata();
	w.display();
}












