#include <bits/stdc++.h>
using namespace std;

int main(){
	int years;
	while(cin>>years){
		if(years % 4 == 0){	
			if((years % 100) != 0 || (years % 400) == 0 ){
					cout<<"閏年"<<endl;
				}else{
					cout<<"平年"<<endl;
				}
		}else{
			cout<<"平年"<<endl;
		}
	}
}
