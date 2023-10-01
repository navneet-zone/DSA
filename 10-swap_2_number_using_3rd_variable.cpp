#include <iostream>
using namespace std;
int main(){
	int a,b,c; // c is a temp variable
	cout<<"enter 2 variables"<<endl;
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"after swap the value of a & b is "<<a<<" "<<b<<endl;
	return 0;
}
