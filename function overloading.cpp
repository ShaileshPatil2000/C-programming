#include<iostream>
using namespace std;
class modem 
{
	public:
	
	void simple(int i)
	
	{
		cout<<"value of i:"<<i<<endl;
	}	
	
	
	void simple(int i,float j) const
	
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
const modem m;
modem n;
	n.simple('a');
	n.simple(75);
	n.simple(25,52.35f);
	m.simple(23,52.35f);
}
