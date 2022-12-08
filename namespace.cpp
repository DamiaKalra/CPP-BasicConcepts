#include<iostream>
using namespace std;
namespace first
{
	class A
	{
	public:
	display()
	{
	cout<<"display of namespace first";
	}
	};
}
namespace second
{
	class A
	{
	public:
	display()
	{
	cout<<"display of namespace second";
	}
	};
}
using namespace first;
//using namespace second;
main()
{
	A ob;
	ob.display();
}

