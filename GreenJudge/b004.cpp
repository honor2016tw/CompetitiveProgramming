#include <iostream>
using namespace std;

int main(){
	int N,M,arr[25],arr2[25];
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>arr[i];
	}
	for(int i=0;i<M;i++)
		arr2[arr[i]-1]=0;
	for(int i=0;i<N;i++){
		if(arr2[i]!=0)
			cout<<i+1<<" ";
	}
}
