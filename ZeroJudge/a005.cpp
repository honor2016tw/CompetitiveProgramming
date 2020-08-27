#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,i,n;
	string str;
	while(cin>>t){
		cin.ignore();
		for(i=0;i<=t;i++){
			int a[]={};
			getline(cin,str);
			if(str.empty()) continue;
			stringstream str1(str);
			for(n=0;n<=4;n++){
				str1>>a[n];
			}
			if(a[1]-a[0] == a[2]-a[1]){
				for(n=0;n<4;n++) cout<<a[n]<<" ";
				cout<<a[3]+(a[1]-a[0])<<endl;
			}else if(a[2]*a[0] == pow(a[1],2)){
				for(n=0;n<4;n++) cout<<a[n]<<" ";
				cout<<a[3]*(a[2]/a[1])<<endl;
			}
			str.clear();
		}
	}
}
