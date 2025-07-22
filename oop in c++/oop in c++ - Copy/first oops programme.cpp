//oop in c++

#include<iostream>

using namespace std;

class student
{
	public:
	string name;
	int age;
};

int main()
{
	student s1;
	
	s1.name = "Pasang";
	s1.age= 18;
	
	cout << "Name = "<< s1.name<<endl;
	cout << "Age  = " << s1.age;
}
