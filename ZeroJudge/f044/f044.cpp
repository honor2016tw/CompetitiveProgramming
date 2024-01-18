#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a,int b) {
    if(a==0) return b;
    if(b==0) return a;
    return GCD(b,a%b);
}

int main() {
    int N,T;
    while(cin>>N>>T) {
        int gcd=GCD(N,T);
        N=N/gcd;
        T=T/gcd;
        cout<<log2(N+T)<<endl;
    }
}
