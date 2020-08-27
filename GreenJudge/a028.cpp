#include <iostream>
using namespace std;

int main(){
	int N,R;
	int p=1;
	cin>>N>>R;
	for(int i=N;i>=(N-R+1);i--){
		p*=i;
	}
	cout<<p<<endl;
}
