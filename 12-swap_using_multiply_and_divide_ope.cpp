#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"enter 2 variables"<<endl;
	cin>>a>>b;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"value after swaping  a & b is "<<a << " "<<b<<endl;
	return 0;

}