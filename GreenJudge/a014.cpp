#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin>>A>>B>>C;
	if(A<=B){
		if(A<=C){
			cout<<A<<endl;
		}else{
			cout<<C<<endl;
		}
	}else{
		if(B>=C){
			cout<<C<<endl;
		}else{
			cout<<B<<endl;
		}
	}
}
