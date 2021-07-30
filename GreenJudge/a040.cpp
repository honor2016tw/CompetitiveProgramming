#include <iostream>
using namespace std;

int main(){
	int N,A,B,t;
	cin>>N;
	t=N;
	while(N--){
		cin>>A>>B;
		if(A>B){
			cout<<"Case "<<t-N<<": "<<"A "<<A-B<<endl;		
		}if(A==B){
			cout<<"Case "<<t-N<<": "<<"0"<<endl;
		}if(A<B){
			cout<<"Case "<<t-N<<": "<<"B "<<B-A<<endl;
		}
	}
}
