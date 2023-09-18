#include<iostream>
using namespace std;
int main(){
	int i,n,j;
	cout<<"Enter number: "<<endl;
	cin>>n;
	for(i=2;i<n;i++){
		for(j=1;j<i;j++){
			if(i%j==0){
			cout<<i<<"  is not prime"<<endl;
			break;
		}
		else{
		cout<<i<<"  is prime"<<endl;
		}
		}
    }
    return 0;
}
