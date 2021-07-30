#include <bits/stdc++.h>
using namespace std;

int main(){
	int M,D,S;
	while(cin>>M>>D){
		S = (M*2+D)%3;
		switch(S){
			case 0:
				cout<<"普通"<<endl;
				break;
			case 1:
				cout<<"吉"<<endl;
				break;
			case 2:
				cout<<"大吉"<<endl;
				break;
		}
	}
}
