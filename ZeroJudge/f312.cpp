#include<iostream>
using namespace std;

int main(){
	int A[2],B[2],C[2],Y[2],n,max=-99999;
	cin>>A[0]>>B[0]>>C[0];
	cin>>A[1]>>B[1]>>C[1];
	cin>>n;
	for(int i=0;i<=n;i++){
		Y[0]=A[0]*i*i+B[0]*i+C[0];
		Y[1]=A[1]*(n-i)*(n-i)+B[1]*(n-i)+C[1];
		if(Y[0]+Y[1]>max) max=Y[0]+Y[1];
	}
	cout<<max<<endl;
}
