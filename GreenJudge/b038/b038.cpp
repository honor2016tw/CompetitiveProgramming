#include <iostream>
using namespace std;

int ans[100];
bool used[100];

void permute(int idx,int N) {
    if(idx==N) {
        for(int i=0; i<N; i++) {
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    for(int i=1; i<=N; i++) {
        if(!used[i]) {
            used[i]=true;
            ans[idx]=i;
            permute(idx+1,N);
            used[i]=false;
        }
    }
}

int main() {
    int N;
    while(cin>>N) {
        permute(0,N);
    }
}
