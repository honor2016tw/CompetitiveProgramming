#include <iostream>
using namespace std;

int main(){
	string A,B;
	int cnt=0,pos=0;
	cin>>A>>B;
	for(int i=0;i<A.length();i++){
		for(int j=pos;j<B.length();j++){
			if(A[i]==B[j]){
				cnt++;
				pos=j;
				continue;
			}
		}
	}
	if(cnt==A.length()){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
