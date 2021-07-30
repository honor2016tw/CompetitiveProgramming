#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=((N*2-1)-(i*2-1))/2;j++){
			cout<<"_";
		}for(int k=1;k<=(i*2-1);k++){
			cout<<i;
		}
		if(i!=N)
			cout<<"\n";
	}
}
