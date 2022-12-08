#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main()
{
	//writiing the data
	ofstream fout("usingseektell.txt");
	fout<<"Damia ";
	cout<<"written success "<<endl;
	fout<<"tania ";
	fout.seekp(ios::cur+20);
	cout<<"pointer is on "<<fout.tellp()<<endl;
	fout<<"mishti";
	cout<<"pointer is on "<<fout.tellp()<<endl;
	fout.close();
	cout<<"file written success ";
	fout.close();
}
//g=get,p=put
//put is used for writing 
//get is used for reading
//tellp is used to find out the position of your pointer
//getp is used to change the position of the pointer
//ios::cur for current position of the pointer
//ios::beg pointer position start from begining
//ios::end pointer pointer points at the end position

//skip word between two word 
  /*string n;
  for(int i=0;i<3;i++)
  {
   cout<<"enter a name ";
   cin>>n;
   fout<<n<<" ";
  }
  fout.close();
    ifstream fin("usingseektell.txt");
   for(int i=0;i<3;i++)
  {
   fin>>n;
   if(i!=1)
   cout<<n<<" ";
  }
  
  //skip previous data usingsame names
 string n;
   ifstream fin("usingseektell.txt");
    for(int i=0;i<3;i++)
  {
   fin>>n;
   if(i!=1)
   cout<<n<<" "<<endl;
  }
}*/
