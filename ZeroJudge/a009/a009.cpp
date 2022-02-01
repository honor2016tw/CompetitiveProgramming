#include <iostream>
using namespace std;

int main(){
	string T;
	while(cin>>T){
	  for(int i=0;i<T.length();i++){
		T[i]-=7;
		cout<<T[i];
	 }
	}
}
