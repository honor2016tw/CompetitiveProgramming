#include <iostream>
using namespace std;

int main(){
	int N;
	int M = 0;
	int m = 1;
	cin >> N;
	int tmp=N;
	while(tmp!=0){
		tmp/=10;
		m++;
		
	}
	while(N!=0){
		tmp = N%10;
		for(int i=m;i>2;i--){
			tmp *=10;
		}
		M+=tmp;
		N/=10;
		m--;
	}
	cout<<M<<endl;
}
