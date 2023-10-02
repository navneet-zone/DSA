#include <iostream>
using namespace std;
int main() {
	int m;
	cin>>m;
	if(m>90){
		cout<<"a grade"<<endl;
	}
	else{
		if(m>=80){
			cout<<"b grade"<<endl;
		}
		else{
			if(m>=70){
				cout<<"c grade"<<endl;
			}
			else{
				if(m>=50){
					cout<<"d grade"<<endl;
				}
				else{
					cout<<"f grade"<<endl;
				}
			}
		}
	}
}
