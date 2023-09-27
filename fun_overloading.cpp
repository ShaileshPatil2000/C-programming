#include<iostream>
using namespace std;
class modem 
{
	public:
	
	void simple(int i)
	
	{
		cout<<"value of i:"<<i<<endl;
	}	
	
	
	void simple(int i,float j)
	
	{
		cout<<"value of i:"<<i<<"  "<<j<<endl;
	}	
	
	void simple(char i)
	
	{
		cout<<"value of i:"<<i<<endl;
	}	
};
int main()
{
	modem m;
	m.simple('a');
	m.simple(75);
	m.simple(23,52.35f);
}
