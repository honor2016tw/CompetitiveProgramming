#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double f;
	cin>>f;
	cout<<fixed<<setprecision(3)<<(f-32)/9*5.0<<endl;
}
