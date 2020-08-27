#include <iostream>
using namespace std;

int main(){
	int A,B,C,max;
	cin>>A>>B>>C;
	max = A;
	if(B>max){
		max = B;
	}if(C>max){
		max = C;
	}
	cout<<max<<endl;
}
