#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c,d;
    cin>>a>>c>>b>>d;
    cout<<fixed<<setprecision(3)<<sqrt(pow(a-b,2.0)+pow(d-c,2.0))<<endl;
}
