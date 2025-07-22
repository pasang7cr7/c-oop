#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
};
class details
{
	public:
		int salary;
};
class employee:public person, details
{
	public:
		void getdata()
		{
			cout<<"Enter name, age and salary"<<endl;
			cin>>name>>age>>salary;
		}
	void putdata()
	{
		cout<<name<<" "<<age <<" "<<salary;
	}
};
int main()
{
	employee e;
	e.getdata();
	e.putdata();
	return 0;
}
