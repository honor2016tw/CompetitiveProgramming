#include <iostream>
using namespace std;

int main() {
    int A,B;
    while(A!=0 && B!=0) {
        cin>>A>>B;
        if(A>B) {
            cout<<"A "<<A-B<<endl;
        }
        if(A==B && A!=0) {
            cout<<"0"<<endl;
        }
        if(A<B) {
            cout<<"B "<<B-A<<endl;
        }
    }
}

