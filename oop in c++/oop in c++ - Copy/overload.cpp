#include<iostream>
using namespace std;
class Time
{
	public:
		int hr,min,sec;
		Time(int hr,int min,int sec)
		{
			this->hr=hr;
			this->min=min;
			this->sec=sec;
		}
		Time operator + (Time t2)
		{
			Time t3(0,0,0);
			t3.sec=sec+t2.sec;
			t3.min=min+t2.min+t3.sec/60;
			t3.hr=hr+t2.hr+t3.min/60;
			t3.min=t3.min%60;
			t3.sec=t3.sec%60;
			return t3;
		}
};
int main()
{
	Time t1(3, 45, 30), t2(4, 56, 7);
	Time t3=t1+t2;
	cout<<t3.hr<<"hr"<<t3.min<<"min"<<t3.sec<<"sec";
	return 0;
}
