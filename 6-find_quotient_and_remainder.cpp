#include <iostream>
using namespace std;
int main(){
	int divisor, divident, reminder, quotient;
	cout<<"enter divident"<<endl;
	cin>>divident;
	cout<<"enter divisor"<<endl;
	cin>>divisor;
	quotient = divident/divisor;
	reminder = divident % divisor;
	cout<<"reminder is"<<reminder<<endl;
	cout<<"quotient is"<<quotient<<endl;
	return 0;
}