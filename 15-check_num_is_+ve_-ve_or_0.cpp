#include <iostream>
using namespace std;
int main(){
	int num;

	cout<<"enter any number"<<endl;
	cin>>num;
	if (num>0)
	{
		cout<<"number is posative"<<endl;
	}
	else if (num<0)
	{
		cout<<"number is negative"<<endl;
	}
	else
		cout<<"number is 0"<<endl;
	
	return 0;
}