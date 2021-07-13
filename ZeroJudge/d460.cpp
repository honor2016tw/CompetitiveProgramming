#include<iostream>
using namespace std;

int main(){
	long long int a;
	while(cin>>a) cout<<(a>5)*590+(a>11)*200+(a>17)*100+(a>59)*(-491)<<endl;
}
