#include <iostream>
using namespace std;

int main(){
	int sum=0,tmp=0;
	for(int i=1;i<=3;i++){
		string A;
		cin>>A;
		for(int j=0;j<A.length();j++){
			if(A[j]<='9' && A[j]>='0'){
				tmp+=A[j]-48;
				tmp*=10;
			}
		}
		sum+=tmp/10;
		tmp=0;
	}
	cout<<sum<<endl;
}
