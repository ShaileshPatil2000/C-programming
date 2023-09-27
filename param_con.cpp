#include<iostream>
using namespace std;
class modem
{
	int a=10;
	public:
		modem(int i,float j)
		{
			cout<<"value of i and j  "<<i<<" & "<<j<<endl;
		}
};
int main()
{
	modem b(10,20);
}
