#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cout<<j<<"x"<<i<<"=";
			cout<<setw(2)<<i*j;
			cout<<"  ";
		}
		if(i!=N)
			cout<<"\n";
	}
}
