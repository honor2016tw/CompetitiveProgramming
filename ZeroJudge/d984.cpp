#include <iostream>
#define Max(a,b) (a>b?a:b)
#define Min(a,b) (a<b?a:b)
using namespace std;

char Who(int a,int b,int c,int n){
	if(n==a) return 'A';
	else if(n==b) return 'B';
	else return 'C'; 
}

int main(){
	int a,b,c;
	while(cin>>a>>b>>c) {
		int BIG=Max(a,Max(b,c)),SMALL=Min(a,Min(b,c));
		int res = (a+b+c)-BIG;
		cout<<(((res-BIG)>0)?Who(a,b,c,res-SMALL):Who(a,b,c,BIG))<<endl;
	}
}