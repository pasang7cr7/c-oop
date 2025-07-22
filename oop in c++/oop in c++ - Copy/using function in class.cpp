//oop in c++ not + function

#include<iostream>

using namespace std;

class student
{
	private:
	string name;
	int age;
	public:
		void set(string name, int age)
		{
			this ->	name = name;
			this -> age = age;
			
			/*
			if we dont use this pointer
			name = name;
			age = age;
			
			ouput is garbage value
			*/
		}
		
	void show()
	{
		cout << "Name = " << name<< endl;
		cout << "Age = " << age<<endl;
	}
};


int main()
{
	student s1;
	
	//	s1.name = "Pasang";
	//	s1.age= 18;
	
	//	cout << "Name = "<< s1.name<<endl;
	//	cout << "Age  = " << s1.age;

	s1.set("Pasang", 18);
	s1.show();
	
	student s2;
	s2.set("ram", 20);
	s2.show();

	return 0;

}
