#include<iostream>

using namespace std;




int main()
{
	
	int n;
	int sum = 0;
	cout<<"How many number do you want?";
	cin>>n;
	
	int *p = new int[n];
	
	cout<<"enter "<<n <<" numbers!";
	
	for(int i=0; i<n;i++)
	{
		cin>>p[i];
		sum = sum+p[i];
	}
	
	
	cout<<"sum = "<<sum;
	
	delete[]p;
	
}
