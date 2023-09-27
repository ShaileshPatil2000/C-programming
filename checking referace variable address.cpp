#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	int &c=a;
	cout<<"Address of a:"<<&a<<endl;
	cout<<"Address of b:"<<&b<<endl;
	cout<<"Address of c:"<<&c<<endl;
	return 0;
}
