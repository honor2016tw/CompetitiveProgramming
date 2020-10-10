#include <iostream>
using namespace std;

void Hanoi(int n,int a,int b,int c){
	if(n==1){
		cout<<"Ring "<<n<<" from "<<a<<" to "<<c<<endl;
		return;
	}	
	Hanoi(n-1,a,c,b);
	cout<<"Ring "<<n<<" from "<<a<<" to "<<c<<endl;
	Hanoi(n-1,b,a,c);

}

int main(){
	int N;
	cin>>N;
	Hanoi(N,1,2,3);
}
