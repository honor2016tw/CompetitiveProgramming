#include <iostream>
using namespace std;

int main(){
	int A,B,p=0;
	cin>>A>>B;
	if(A>B){
		for(int i=A;i>B;i--){
			cout<<i<<"+";
			p+=i;
		}
		cout<<B<<"="<<p+B<<endl;
	}if(A<B){
		for(int i=A;i<B;i++){
			cout<<i<<"+";
			p+=i;
		}
		cout<<B<<"="<<p+B<<endl;
	}if(A==B){
		cout<<A<<"="<<A<<endl;
	}
}
