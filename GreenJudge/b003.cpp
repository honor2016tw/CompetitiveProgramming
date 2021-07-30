#include <iostream>
using namespace std;

int main(){
	int N,M,Mb=0,Ms=0,arr[100];
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>arr[i];
	cin>>M;
	for(int i=0;i<N;i++){
		if(arr[i]>M)
			Mb++;
		if(arr[i]<M)
			Ms++;
	}
	cout<<Mb<<" "<<Ms<<endl;
}
