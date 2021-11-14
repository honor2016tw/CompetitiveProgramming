#include <iostream>
using namespace std;

int dp1[15],dp2[15];

int factor(int n,int m){
	if(m==0) return 1;
	if(dp1[n]==-1)
		dp1[n]=n*factor(n-1,m-1);
	return dp1[n];
}

int power(int n,int m){
	if(m==1) return n;
	if(dp2[n]==-1)
		dp2[n]=n*power(n,m-1);
	return dp2[n];
} 

int main(){
	int n,m;
	for(int i=0;i<15;i++){
		dp1[i]=-1;
		dp2[i]=-1;
	}
	while(cin>>n>>m){
		cout<<power(n,m)+(m?factor(n,n-m):n)<<endl;
	}
}