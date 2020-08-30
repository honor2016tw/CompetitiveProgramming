#include <iostream>
using namespace std;

int main(){
	int N,arr[100],max=-1,maxi;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	for(int i=0;i<N;i++){
		if(arr[i]>max){
			max=arr[i];
			maxi=i;
		}
	}
	cout<<maxi+1<<" "<<max<<endl;
}
