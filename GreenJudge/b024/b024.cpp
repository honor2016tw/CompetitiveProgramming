#include <iostream>
#define ll long long int
using namespace std;

ll dp[100];

ll step(ll n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(dp[n]!=-1) return dp[n];
	else dp[n]=step(n-1)+step(n-2);
	return dp[n];
}

int main(){
	ll N;
	cin>>N;
	for(int i=0;i<100;i++){
		dp[i]=-1;
	}
	cout<<step(N)<<" "<<step(step(N)%N);
}
