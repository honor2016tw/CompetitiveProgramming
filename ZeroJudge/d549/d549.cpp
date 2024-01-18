#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c;
    while(cin>>a>>b>>c)cout<<setprecision(2)<<fixed<<sqrt(a*a+c*c-b*b)<<endl;
}
