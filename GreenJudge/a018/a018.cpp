#include <iostream>
using namespace std;

int main(){
	int H,M;
	cin >>H>>M;
	H *= 60;
	M += H;
	if(M>=860 & M<=1000){
		cout<<"YES"<<endl;	
	}else{
		cout<<"NO"<<endl;
	}
}
