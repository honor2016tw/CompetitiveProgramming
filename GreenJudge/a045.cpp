#include <iostream>
using namespace std;

int main(){
	int N,cnt=0;
	cin>>N;
	for(int i=1;i*i<=N;i++){
		if(N%i==0){
			cnt++;
		}if(cnt>1){
			break;
		}
	}
	if(cnt==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
