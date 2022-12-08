#include<iostream>
using namespace std;
class overload
{
		public:
		void area(int a,int b)
		{
			cout<<"area of rectangle "<<a*b;
		}
			void area(int a)
		{
			cout<<"area of square "<<a*a;
		}
			void area(int a,int b,int c)
		{
			cout<<"area of cube "<<a*b*c;
		}
		void area(float a)
		{
			cout<<"area of circle "<<3.14*a*a;
		}
};
main()
{
	overload o;
	o.area(3,4);
	cout<<"\n";
	o.area(9);
	cout<<"\n";
	o.area(2,3,5);
	cout<<"\n";
	o.area(3.3f);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
