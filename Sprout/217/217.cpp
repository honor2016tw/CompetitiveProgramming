#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string line;
	while(cin>>line){
		for(int i=0;i<line.length();i++)
			cout<<char(((line[i]-'a'+3)%26)+97);
		cout<<endl;
	}
}