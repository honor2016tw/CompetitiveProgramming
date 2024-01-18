#include <iostream>
using namespace std;

int Combi(int n) {
    return n*(n+1)/2;
}

int main() {
    int n,m;
    while(cin>>n>>m) {
        cout<<Combi(n)*Combi(m)<<endl;
    }
}
