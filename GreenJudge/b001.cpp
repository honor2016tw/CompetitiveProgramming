#include <iostream>
using namespace std;

int main(){
	int N;
	int arr[100];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	for(int i=N-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
}
