#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"Inside A";
		}
};
class B
{
	public:
		void show()
		{
			cout<<"Inside B";
		}
};
class C:public A, public B
{
	
};
int main()
{
	C ob;
	ob.A::show();
	ob.B::show();
	return 0;
}
