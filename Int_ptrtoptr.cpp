#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *b=&a;
	int **c=&b;
	cout<<**c<<" "<<*b<< " "<<a<<endl;
	cout<<sizeof(**c)<<" "<<sizeof(*b)<<" "<<sizeof(a)<<endl;
	cout<<sizeof(&a)<<" "<<sizeof(&b)<<" "<<sizeof(&c)<<endl;
	cout<<&b;
	cout<<&a;
	
	cout<<endl<<endl<<endl;
	
	char a='x';
	char *b=&a;
	char**c=&b;
	cout<<**c<<" "<<*b<<" "<<a<<endl;
		cout<<sizeof(**c)<<" "<<sizeof(*b)<<" "<<sizeof(a)<<endl;
	cout<<sizeof(&a)<<" "<<sizeof(&b)<<" "<<sizeof(&c)<<endl;
	

	
	
}
