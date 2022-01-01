#include <iostream>
#include <string>
#define endl "\n"
using namespace std;

int main(){
	string T[10];
	for(int i=0;i<10;i++) 
		cin>>T[i];
	for(int i=9;i>=0;i--){
		for(int j=0;j<T[i].length();j++){
			if(T[i][j]<='Z' && T[i][j]>='A')
				cout<<((T[i][j]+32!='z')?char(T[i][j]+32):' ');
			else if(T[i][j]<='z' && T[i][j]>='a')
				cout<<((T[i][j]-32!='z')?char(T[i][j]-32):' ');
			else 
				cout<<T[i][j]-'0'+3;

		}
		cout<<endl;
	}
}
