#include <iostream>
using namespace std;

int main() {
    int N;
    int sum=0;
    cin >>N;
    while(N!=0) {
        sum += N%10;
        N /= 10;
    }
    cout<<sum<<endl;
}

