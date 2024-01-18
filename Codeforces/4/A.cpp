#include <iostream>
using namespace std;

int main() {
    int N;
    while(cin>>N) {
        if(N==2)cout<<"NO"<<endl;
        else cout<<((N%2)?"NO":"YES")<<endl;
    }
}
