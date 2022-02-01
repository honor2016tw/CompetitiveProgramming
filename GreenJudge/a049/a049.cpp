#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(i%3==1 && j%3==1)
				cout<<"@";
			else if(i%3==2 && j%3==2)
				cout<<"@";
			else if(i%3==0 && j%3==0)
				cout<<"@";
			else
				cout<<"-";
		}
		if(i!=N)
			cout<<"\n";
	}
}
