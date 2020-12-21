#include<iostream>
using namespace std;

int main(){
	int n,max=-1;
	for(int i=0;i<3;i++){
		cin>>n;
		if(n>max) max=n;
	}
	cout<<max<<endl;
}
