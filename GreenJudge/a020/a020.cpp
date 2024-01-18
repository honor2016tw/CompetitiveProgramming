#include <iostream>
using namespace std;

int main() {
    int A,B;
    int P=0;
    cin >>A>>B;
    if(A==B) {
        P+=50;
    }
    if(A%2==1) {
        P+=100;
    }
    if(B%3==2) {
        P+=200;
    }
    cout<<P<<endl;
}
