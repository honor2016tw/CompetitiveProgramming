#include<iostream>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	cout<<(n>5)*590+(n>11)*200+(n>17)*100+(n>59)*-491<<endl;
}
