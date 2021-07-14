#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,cnt;
    while(cin>>n){
	bool start=true;
	for(int i=2;i<=n;i++){
	    cnt=0;
	    while(n%i==0){
		cnt++;
		n/=i;
	    }
	    if(cnt>0){
		if(start){
		    if(cnt>1)
			cout<<i<<"^"<<cnt;
		    else
			cout<<i;
		    start=false;
		}else{
		    if(cnt>1)
			cout<<" * "<<i<<"^"<<cnt;
		    else
			cout<<" * "<<i;
		}
	    }
	}
    }

}
