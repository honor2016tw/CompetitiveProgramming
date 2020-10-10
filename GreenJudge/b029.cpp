#include <iostream>
using namespace std;

int main(){
	int DP[1005],coins[]={2,5,10,20,25};
	int N;
	memset(DP,0,sizeof(DP));
	cin>>N;
	DP[0]=1;
	for(int i=0;i<5;i++){
		for(int j=coins[i];j<=N;j++){
			DP[j]+=DP[j-coins[i]];
		}
	}
	cout<<DP[N]<<endl;
}
