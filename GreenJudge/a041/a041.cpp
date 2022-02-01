#include <iostream>
using namespace std;

int main(){
	int N,sum=0,M=0;
	cin>>N;
	while(N!=0){
		sum+=N;
		M+=N;
		N=M/5;
		M=M%5;
	}
	cout<<sum<<endl;
}
