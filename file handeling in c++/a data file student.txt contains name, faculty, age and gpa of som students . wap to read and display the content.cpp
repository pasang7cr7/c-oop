//a data file student.txt contains name, faculty, age and gpa of som students . wap to read and display the content

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20], faculty[20];
	int age; 
	float gpa;
	
	ifstream readfrom("student.txt");
	
//	if(!readfrom)
//	{
//		cout<<"unable to open file";
//		
//	}
	if(!readfrom . is_open())
	{
		cout<<"no file";
	}
	else
	{
		while(readfrom>>name>>faculty>>age>>gpa)
		{
		
			cout<<name<<" "<<faculty<<" "<<age<<" "<<gpa<<"\n";
		}
	}
	

	
	
}
