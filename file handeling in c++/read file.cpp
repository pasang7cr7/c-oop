//for reading file

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char n;
	int v =0 ;
	ifstream readfrom("abc.txt");
	
	while(!readfrom.eof())
	{
		readfrom.get(n);
		
		if(n=='a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
		{
			v++;
		}
		cout<<n;
		
		
	}
	cout<<"number of vowels = "<< v;
	return 0;
}
