#include <iostream>
using namespace std;

int main() {
    int A,B;
    while(cin>>A>>B) {
        if(A>B) {
            cout<<A<<">"<<B;
        } else if(A==B) {
            cout<<A<<"="<<B;
        } else {
            cout<<A<<"<"<<B;
        }
    }
}
