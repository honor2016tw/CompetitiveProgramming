#include <iostream>
using namespace std;

int main() {
    long long int n,m,a;
    while(cin>>n>>m>>a) {
        cout<<((n+a-1)/a)*((m+a-1)/a)<<endl;
    }
}
