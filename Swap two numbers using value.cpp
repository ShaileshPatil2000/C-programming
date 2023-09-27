#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"Before swapping a and b: "<<a<<b<<endl;
	
	swap(a,b);
	cout<<"After swapping a and b : "<<a<<b<<endl;
	return 0;
}
void swap(int p, int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"After swapping p and q: "<<p<<q<<endl;
}
