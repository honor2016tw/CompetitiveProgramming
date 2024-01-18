#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    while(A!=0 && B!=0) {
        if(A>B) {
            A=A%B;
            continue;
        }
        if(A==1 || B==1) {
            A=0;
            B=1;
            continue;
        }
        if(A<B) {
            B=B%A;
            continue;
        }

    }
    if(B==0) {
        cout<<A<<endl;
    }
    if(A==0) {
        cout<<B<<endl;
    }

}
