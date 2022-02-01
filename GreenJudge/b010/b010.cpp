#include <iostream>
using namespace std;

int main(){
	string A;
	cin>>A;
	for(int i=0;i<A.length();i++){
		if(A[i]==66){
			A[i]='Z';
		}if(A[i]==65){
			A[i]='Y';
		}else{
			A[i]-=2;
		}
	}
	cout<<A<<endl;
}
