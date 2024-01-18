#include <iostream>
using namespace std;

int main() {
    string A;
    cin>>A;
    for(int i=A.length(); i>=0; i--) {
        cout<<A[i];
    }
}
