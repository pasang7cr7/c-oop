// file handeling in c++

#include<iostream>
#include<fstream>
 
 using namespace std;
 

int main()
{
	string str = "Pasang Tamang\n";
	ofstream writeto("abc.txt");
	
	int i;
	
	for(i=0;i<str.size();i++)
	{
		writeto.put(str[i]);
	}
	
	cout<<"data written successfully";
	
	
	return 0;
	
	
}
