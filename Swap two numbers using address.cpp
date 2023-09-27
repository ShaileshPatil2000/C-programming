#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b;
	cout<<"enter two nos";
	cin>>a>>b;
	cout<<"before swapping two no a and b:"<<a<<b<<endl;
	swap(&a,&b);
	cout<<"after swapping two no afdjfdgjj and b:"<<a<<b<<endl;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"after swapping two nos p & q:"<<*p<<*q<<endl;
}
