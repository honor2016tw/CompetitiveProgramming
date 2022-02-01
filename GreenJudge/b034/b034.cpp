#include <iostream>
using namespace std;

int main(){
	int N,i=0,cnt=0,coin[]={10000,5000,1000,500,100,50,10,5,1};
	cin>>N;
	while(N>0){
		if(N>=coin[i]){
			cnt+=N/coin[i];
			N%=coin[i];
			if(N<5){ 
				cnt+=N;
			   	N=0;	
				continue;
			}
		}else i++;
	}
	cout<<cnt<<endl;
	
}
