#include <iostream>
#define Max(a,b) (a>b?a:b)
using namespace std;

int main() {
    int a,b,c;
    while(cin>>a>>b>>c) cout<<Max(a,Max(b,c))<<endl;
}
