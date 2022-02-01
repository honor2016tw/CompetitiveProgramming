#include <iostream>
using namespace std;

int Max(int a,int b){
	int bigger=-1;
	if(a>bigger) bigger=a;
	if(b>bigger) bigger=b;
	return bigger;
}

int main(){
	int DP[105][105];
	for(int i=0;i<105;i++) DP[i][0]=0;
	for(int j=0;j<105;j++) DP[0][j]=0;
	string A,B;
	cin>>A>>B;
	for(int i=1;i<=A.length();i++){
		for(int j=1;j<=B.length();j++){
			if(A[i-1]==B[j-1]){
				DP[i][j]=DP[i-1][j-1]+1;
			}else{
				DP[i][j]=Max(DP[i-1][j],DP[i][j-1]);
			}
		}
	}
	cout<<DP[A.length()][B.length()];
}
