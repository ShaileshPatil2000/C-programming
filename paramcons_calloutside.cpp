#include<iostream>
using namespace std;

class modem
{
	int i=20;
//	modem(int ,float );
	public:
		modem()
		{
			cout<<"default constructure is called"<<endl;
		}
		modem(int i,float j)
		{
			cout<<"parametrised constructer is called"<<endl;
			cout<<"value of i and j is  "<<i<<"  "<<j<<endl;
		}
		modem(int ,int);
	
};
modem::modem(int a,int m)
{
		cout<<"out side the class parametrised constructer is called"<<endl;
}

int main()
{
	modem x;
	modem y(40,50);
	modem z(10,20.12f);
}
