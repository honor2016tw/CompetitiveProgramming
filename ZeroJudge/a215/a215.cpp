#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll int n,m;
    while(cin>>n>>m) {
        int cnt=0;
        for(int i=n,sum=n; sum<=m; i++,sum+=i) cnt++;
        cout<<cnt+1<<endl;
    }
}
