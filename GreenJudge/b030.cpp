#include <iostream>
using namespace std;

int DP[105][1005],L[105],S[105];

int Max(int a,int b){
	int bigger=-1;
	if(a>bigger) bigger=a;
	if(b>bigger) bigger=b;
	return bigger;
}

int Rec(int N,int index,int length){
	if(index==N) return 0;
	if(DP[index][length]>0) return DP[index][length];
	int dont=Rec(N,index+1,length);
	if(length<L[index]){
		DP[index][length]=dont;
		return DP[index][length];
	}
	int watch=S[index]+Rec(N,index+1,length-L[index]);
	DP[index][length]=max(watch,dont);
	return DP[index][length];
	
}

int main(){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>L[i]>>S[i];
	}
	cout<<Rec(N,0,M)<<endl;

}
