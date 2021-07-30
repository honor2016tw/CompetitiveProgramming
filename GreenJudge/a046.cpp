#include <iostream>
using namespace std;

int main(){
	int W,H;
	cin>>W>>H;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cout<<"#";
		}
		if(i!=H-1)
			cout<<"\n";
	}
}
