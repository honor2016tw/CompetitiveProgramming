#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    while(cin>>a>>b>>c>>d && !(a+b+c+d)) {
        cout<<(80+(a+40*(a<b)-b)+40+(c+40*(c<b)-b)+(c+40*(d>c)-d))*9<<endl;
    }
}
