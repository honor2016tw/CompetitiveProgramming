#include <iostream>
#include <algorithm>
#define MAXN 10000
#define endl "\n"
#define fastio cin.tie(0);ios::sync_with_stdio(0)
using namespace std;

int current[MAXN],a[MAXN],b[MAXN],c[MAXN];

int check(int N,int day) {
    for(int i=0; i<N; i++)
        current[i] = a[i]+day*b[i];
    sort(current,current+N);
    int* result = upper_bound(current,current+N,c[N-1]);
    return N-(result-current);
}

int main() {
    fastio;
    int T,N,K;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        for(int i=0; i<N; i++) cin>>a[i]>>b[i];
        for(int i=0; i<N; i++) cin>>c[i];
        sort(c,c+N);
        int zero=0;
        bool impossible = true;
        for(int i=0; i<N; i++)
            if(b[i]==0) zero++;
        if(zero>=N-K)
            impossible=true;
        int Left=0,Right=100000000,result=0,Mid;
        while(Left<=Right) {
            //cout<<"Left:"<<Left<<endl;
            //cout<<"Right:"<<Right<<endl;
            Mid=(Left+Right)/2;
            result = check(N,Mid);
            if(result<K) {
                Left = Mid+1;
                continue;
            } else {
                impossible = false;
                Right = Mid-1;
                continue;
            }
        }
        cout<<(impossible?-1:Mid)<<endl;
    }
}
