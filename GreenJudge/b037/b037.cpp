#include <iostream>
using namespace std;
int ans[100];

void permute(int idx,int N,int M) {
    if(idx==N) {
        for(int i=0; i<N; i++) {
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<=M; i++) {
        ans[idx]=i;
        permute(idx+1,N,M);
    }
}

int main() {
    int N,M;
    while(cin>>N>>M) {
        permute(0,N,M);
    }
}
