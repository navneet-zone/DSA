#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
for(int r=0;r<n;r++){
	if(r==0||r==n-1){
		for(int i=0;i<n-1;i++){
		cout<<"* ";
		
	}}
else{
	cout<<"*";
	for(int c=0;c<n;c++){
		cout<<" ";
	}
	cout<<"*";
}cout<<endl;
}return 0;
}