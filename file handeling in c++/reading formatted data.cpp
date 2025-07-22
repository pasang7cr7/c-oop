//reading formatted data


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
//	char n = 'P';
//	int a = 5;
//	double b = 7.7;
//	
//	string name = "hello";
//	
//	ofstream writeto("xyz.txt");
//	writeto<< n<< " "<< a<< " "<< b<<" "<<name;
//	
//	cout<<"data written successfully";
	
	
	


char n1;
int a1;
double b1;
string name1;
ifstream readfrom("xyz.txt");
readfrom>>n1>>a1>>b1>>name1;

cout<< n1<< " \n"<< a1<< "\n"<< b1<<"\n"<<name1;

return 0;
}

