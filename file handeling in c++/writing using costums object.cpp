//using oop concept

#include<iostream>
#include<fstream>

using namespace std;

class student{
	char name[20], faculty[20];
	int age;
	
	public:
		void getdata()
		{
			cout<<"Enter name faculty and age: ";
			cin>>name>>faculty>>age;
			cout<<endl;
		}
		
		 void show()
		{
			cout<<name<<" "<<faculty<<" "<<age<<"\n";
		}  
		
		
		
	};
	

	
	int main()
	{
		student s;
		s.getdata();
		ofstream writeto;
		writeto.open("hello.txt", ios::app);
		if(!writeto)
		{
			cout<<"unable to open";
		}
		
		else
		{
			writeto.write((char *)&s, sizeof(s));
			writeto.close();
			cout<<"data written successfully"<<endl;
			
		}
		
		//student s1;
		ifstream readfrom;
		readfrom.open("hello.txt");
		if(!readfrom)
		{
			cout<<"unable to open";
		}
		else{
			while(	readfrom.read((char*)&s, sizeof(s)))
			{
			
						s.show();	
			}
			
		
			readfrom.close();
		}
		
		return 0;
		
	}
