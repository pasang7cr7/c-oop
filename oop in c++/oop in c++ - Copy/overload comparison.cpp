#include<iostream>
using namespace std;
class A
{
	public:
		int m;
		A(int m)
		{
			this->m=m;
		}
		bool operator >(A a2)
		{
			return m>a2.m;
		}
};
int main()
{
	A a1(5), a2(10)
	if(a1>a2)
		cout<<a1.m<<"is greater";
	else
		cout<<a2.m<<"is greater";
		return 0;
}
