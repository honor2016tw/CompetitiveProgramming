#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll int N;
    while(cin>>N) {
        ll int n=(N-1)/2+1;
        cout<<3*(2*n*n-1)-6<<endl;
    }
}
