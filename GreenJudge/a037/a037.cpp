#include <iostream>
using namespace std;

int main(){
	int n,A,B;
	cin>>n;
	while(n--){
		cin>>A>>B;
		if(A>B){
			cout<<"A "<<A-B<<endl;
		}if(A==B){
			cout<<"0"<<endl;
		}if(A<B){
			cout<<"B "<<B-A<<endl;
		}
	}
}
