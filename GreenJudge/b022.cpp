#include <iostream>
using namespace std;

int cnt=0;
int Fib(int N){
	cnt++;
	if(N==0) return 0;
	if(N==1) return 1;
	return Fib(N-1)+Fib(N-2);
}

int main(){
	int N;
	cin>>N;
	cout<<Fib(N)<<" ";
	cout<<cnt<<endl;
}
