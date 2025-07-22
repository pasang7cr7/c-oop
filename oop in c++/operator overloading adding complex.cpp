#include<iostream>

using namespace std;

class complex{
	
	public:
		float r, i;
		
		complex(float r, float i)
		{
			this -> r = r;
			this -> i = i;
		}
		
	complex operator +(complex a2)
	{
		complex a3(0,0);
		a3.r = r + a2.r;
		a3.i = i+a2.i;
		
		return a3;
	}
};

int main()
{
	complex a1(10, 3.33333) , a2(7,2.22222);
	complex a3 = a1+ a2;
	cout<<"real: "<< a3.r <<" imaginary: "<<a3.i; 
}
