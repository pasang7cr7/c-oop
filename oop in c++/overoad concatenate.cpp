#include<iostream>
using namespace std;
class A
{
	public:
		string m;
		A(string m)
		{
			this->m=m;
		}
		A operator +(A a2)
		{
			A a3("");
			a3.m=m+a2.m;
			return a3;
		}
};
int main()
{
	A a1("hello"), a2("hi");
	A a3=a1+a2;
	cout<<a3.m;
	return 0;
}
