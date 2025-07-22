//wap to input name faculty age and gpa of a student and store in a file 

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char name[20], faculty[20];
	
	int age;
	float gpa;
	
	cout<<"Enter name,faculty, age and gpa: ";
	cin>>name>>faculty>>age>>gpa;
	
	ofstream writeto("student.txt", ios::app);
	writeto<<name<<" "<<faculty<<" "<<age<<" "<<gpa<<"\n";
	
	
	cout<<"Data written successfully";
	
	return 0;
}
