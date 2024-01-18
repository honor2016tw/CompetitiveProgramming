#include <iostream>
using namespace std;

int main() {
    int N,M;
    int m=0;
    cin >>N>>M;
    while(N<=M) {
        N *=3;
        m++;
    }
    cout<<m<<endl;
}
