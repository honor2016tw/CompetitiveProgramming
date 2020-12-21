#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float X1,Y1,X2,Y2;
	while(true){
		cin>>X1>>Y1>>X2>>Y2;
		if(X1==0) break;
		if(X2==X1||Y2==Y1){
			if(X2==X1&&Y2==Y1) cout<<"0"<<endl;
			else cout<<"1"<<endl;
		}else if(abs((Y2-Y1)/(X2-X1))==1){
			cout<<"1"<<endl;
		}else{
			cout<<"2"<<endl;
		}
	}
}
