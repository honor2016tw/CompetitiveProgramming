#include <iostream>
using namespace std;

int main() {
    int t,s,d;
    cin>>t;
    while(t--) {
        while(cin>>s>>d) {
            if(d>s | (s+d)%2!=0) cout<<"impossible"<<endl;
            else cout<<(s+d)/2<<" "<<(s+d)/2-d<<endl;
        }
    }
}
