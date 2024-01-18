#include <iostream>
using namespace std;

int main() {
    string A;
    cin>>A;
    for(int i=0; i<A.length(); i++) {
        if(A[i]!=A[A.length()-i-1]) {
            cout<<"NO"<<endl;
            A="0";
            break;
        }
    }
    if(A!="0")
        cout<<"YES"<<endl;

}
