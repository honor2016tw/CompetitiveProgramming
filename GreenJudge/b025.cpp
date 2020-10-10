#include <iostream>
#define ll long long int
using namespace std;

ll dp[40][40];

ll step(int x,int y){
	if(x==0) return 1;
	if(y==0) return 1;
	if(x==1&&y==1) return 2;
	if(dp[x][y]!=-1) return dp[x][y];
	else dp[x][y]=step(x-1,y)+step(x,y-1);
	return dp[x][y];	
}

int main(){
	int x,y;
	cin>>x>>y;
	for(int i=0;i<40;i++){
		for(int j=0;j<40;j++){
			dp[i][j]=-1;
		}
	}
	cout<<step(x,y)<<endl;
}
