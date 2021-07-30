#include <iostream>
using namespace std;

int main(){
	int N,S=0;
	cin>>N;
	for(int i=1;i<N;i++){
		if(N%i==0){
			S+=i;
		}
	}
	if(S<N) cout<<"Deficient"<<endl;
	if(S==N) cout<<"Perfect"<<endl;
	if(S>N) cout<<"Abundant"<<endl;
}
