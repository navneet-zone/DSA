#include <iostream>
using namespace std;
int main(){
	int num;

	cout<<"enter any number"<<endl;
	cin>>num;
	if (num<=9)
	{
		cout<<"number is single digit"<<endl;
	}
	else
	cout<<"number is multi digit"<<endl;
	
	return 0;
}