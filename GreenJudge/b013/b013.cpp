#include <iostream>
using namespace std;

int main(){
	string s[3];
	for(int i=0;i<3;i++){
		getline(cin,s[i]);
	}
	cout<<s[2]<<endl;
	cout<<s[0]<<endl;
	cout<<s[1]<<endl;
}
