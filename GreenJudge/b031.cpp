#include <iostream>
using namespace std;

int Max(int a,int b){
	int bigger=-999;
	if(a>bigger) bigger=a;
	if(b>bigger) bigger=b;
	return bigger;
}

int main(){
	int DP[1005],L[105],S[105];
	int N,M;
	cin>>N>>M;
	memset(DP,0,sizeof(DP));
	for(int i=0;i<N;i++){
		cin>>L[i]>>S[i];
	}
	for(int i=0;i<N;i++){
		for(int j=L[i];j<=M;j++){
			DP[j]=Max(DP[j],DP[j-L[i]]+S[i]);
		}
	}
	cout<<DP[M]<<endl;

}
