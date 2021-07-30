#include <iostream>
using namespace std;

int dp[105][105];

int min(int a,int b,int c){
	int min=9999;
	if(a<min) min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	return min;
}

int main(){
	int H,W,max=-1;
	cin>>H>>W;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>dp[i][j];
			if(dp[i][j]==0) dp[i][j]=1;
			else dp[i][j]=0;
		}
	}
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			if(i==0 || j==0) dp[i][j]=dp[i][j];
			if(dp[i][j]==1) dp[i][j]=min(dp[i][j-1],dp[i-1][j-1],dp[i-1][j])+1;
			if(dp[i][j]>max) max=dp[i][j];
		}
	}
	cout<<max*max<<endl;
}
