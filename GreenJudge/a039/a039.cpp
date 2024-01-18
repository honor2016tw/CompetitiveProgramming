#include <iostream>
using namespace std;

int main() {
    int A,B;
    while(cin>>A>>B) {
        if(A>B)
            cout<<"A "<<A-B<<endl;
        if(A==B)
            cout<<"0"<<endl;
        if(A<B)
            cout<<"B "<<B-A<<endl;
    }
}
