	#include<iostream>
using namespace std;
int main()
{
	char a='x';
	char *b=&a;
	char**c=&b;
	cout<<**c<<" "<<*b<<" "<<a<<endl;
		cout<<sizeof(**c)<<" "<<sizeof(*b)<<" "<<sizeof(a)<<endl;
	cout<<sizeof(&a)<<" "<<sizeof(&b)<<" "<<sizeof(&c)<<endl;
	
}
