#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		void getData()
		{
			cout<<"Accept real and imaginary values:"<<endl;
			cin>>real>>img;
		}
		void display()
		{
			cout<<"complex no is"<<real<<"+"<<img<<"i"<<endl;
		}
		void acceptParameter(int,int);
		void setReal(int r)
		{
			real=r;
		}
		int getReal()
		{
			return real;
		}
};
void Complex :: acceptParameter(int r,int i)
{
	real=r;
	img=i;
}
int main()
{
	Complex c1;
	cout<<"sizeof object"<<sizeof(c1)<<endl;
	c1.getData();
	c1.display();
	Complex c2;
	cout<<"sizeof object"<<sizeof(c2)<<endl;
	c2.acceptParameter(10,2);
	c2.display();
	c2.setReal(20);
	c2.display();
	cout<<"modified real part is"<<c2.getReal(); 
		return 0;
}
