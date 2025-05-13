//WAP TO INPUT RADIUS AND FIND AREA OF CIRCLE

#include<iostream>

using namespace std;

int main()
{
	float r, area;
	cout<<"Enter Radius of circle: ";
	cin>>r;
	
	area = 3.14 * r * r;
	
	cout<< "Area of Circle = "<< area;
	
	return 0;
}
