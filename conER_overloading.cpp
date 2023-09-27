#include<iostream>
using namespace std;
class modem
{
	public:
	modem(int i)
	{
		cout<<"first construsture call"<<i<<endl;
	}
	modem(int j,float k)
	{
		cout<<"secound constructure call"<<j<<"  "<<k<<endl;
	}
	modem(float k,int j)
	{
	cout<<"third constructure call"<<k<<"  "<<j;
	}
};
int main()
{
	modem m(20);
	modem n(10,20.23);
	modem o(20.12,15);
}
