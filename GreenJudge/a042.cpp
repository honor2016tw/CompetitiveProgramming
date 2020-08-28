#include <iostream>
using namespace std;

int main(){
	int N,sum=13;
	cin>>N;
	for(int i=1;i<N;i++){
		sum*=13;
		sum%=100;
	}
	cout<<sum/10<<endl;
}
