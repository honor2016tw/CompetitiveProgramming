#include <iostream>
using namespace std;

int Max(int a,int b){
	int bigger=-1;
	if(a>bigger) bigger=a;
	if(b>bigger) bigger=b;
	return bigger;
}

int main(){
	int N,max=1,score[105],DP[105];
	for(int i=0;i<105;i++) DP[i]=1;
	cin>>N;
	for(int i=0;i<N;i++) cin>>score[i];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(score[i]<score[j]){
				DP[j]=Max(DP[j],DP[i]+1);
			}
		}
	}
	for(int i=0;i<N;i++){
		if(DP[i]>max) max=DP[i];
	}
	cout<<max<<endl;
}
