#include <iostream>
using namespace std;

int main() {
    int t,a,b;
    while(cin>>t) {
        while(t--) {
            cin>>a>>b;
            if(a>b) cout<<">"<<endl;
            else if(a<b) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
    }
}
