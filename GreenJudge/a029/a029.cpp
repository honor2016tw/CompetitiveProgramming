#include <iostream>
using namespace std;

int main(){
	int A,B,p=0;
	cin>>A>>B;
	for(int i=A;i<=B-1;i++){
		cout<<i<<"+";
		p+=i;
	}
	cout<<B<<"="<<p+B<<endl;
}
