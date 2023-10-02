#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	for(int r=0; r<n; r++){
		for(int c=0;c<r+1;c++)
		cout<<c+1;
		cout<<endl;
	}return 0;
}