//WAP TO check odd even

#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	
	if(a%2==0)
	{
		cout<< a <<" is even";
		cout<< endl <<b<<" is odd";
	}
	else
	{
			cout<< b <<" is even";
		cout<< endl << a <<" is odd";
	}




	return 0;
}
