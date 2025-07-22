#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll;
};
class marks:public student
{
	public:
		float math, computer,digital;
};
class record:public marks
{
	public:
		int semester;
		float average;
		
		void getdata()
		{
			name="Sandhya";
			roll=28;
			math=47;
			computer=50;
			digital=60;
			semester=1;
			
			average=(math+computer+digital)/3.0;
		}
	void putdata()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Roll:"<<roll<<endl;
		cout<<"Marks in 3 subjects:\n";
		cout<<"Math:"<<math<<endl;
		cout<<"Computer:"<<computer<<endl;
		cout<<"Digital:"<<digital<<endl;
		cout<<"Semester:"<<semester<<endl;
		cout<<"Average:"<<average<<endl;
	}
};
int main()
{
	record r;
	r.getdata();
	r.putdata();
	return 0;
}
