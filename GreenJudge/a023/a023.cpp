#include <iostream>
using namespace std;

int main() {
    int N;
    int n=1;
    cin >> N;
    while(N!=1) {
        if(N%2==1) {
            N = 3*N+1;
        } else {
            N /=2;
        }
        n++;
    }
    cout<<n<<endl;
}
