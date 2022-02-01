#include<iostream>
using namespace std;

int main(){
	int n,score=0;
	cin>>n;
	switch((n-1)/10){
		case 0:
			score=n*6;
			break;
		case 1:
			score=60+(n-10)*2;
			break;
		case 2:
			score=80+(n-20);
			break;
		case 3:
			score=80+(n-20);
		default:
			if(n>=40) score=100;
			break;
	}
	cout<<score<<endl;
}
