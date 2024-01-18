#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N%4==0) {
        if(N%100 != 0) {
            cout<<"YES"<<endl;
        } else if(N%400 == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }
}
