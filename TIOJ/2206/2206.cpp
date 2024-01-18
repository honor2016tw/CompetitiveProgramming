#include <iostream>
#define MAXN 100005
#define fastio cin.tie(0);ios::sync_with_stdio(0)
#define endl "\n"
using namespace std;

int arr[MAXN],counting[MAXN],times[MAXN];

int RecQuery(int a,int b) {
    if(times[a]!=0)
        b=b%(times[a]-1);
    if(b==0) return a;
    if(b==1) return arr[a];
    return arr[RecQuery(a,b-1)];
}

int main() {
    //fastio;
    int N,Q,a,b;
    while(cin>>N) {
        for(int i=1; i<=N; i++) {
            cin>>arr[i];
            counting[arr[i]]++;
        }
        for(int i=1; i<=N; i++) {
            if(counting[i]==0) {
                times[i]=0;
                continue;
            }
            int cnt=2;
            while(true) {
                if(cnt>=N) {
                    cnt=0;
                    break;
                }
                if(RecQuery(i,cnt) == arr[i])
                    break;
                else
                    cnt++;
            }
            times[i] = cnt;
        }
        cin>>Q;
        for(int i=0; i<Q; i++) {
            cin>>a>>b;
            if(!b)
                cout<<a<<endl;
            else {
                cout<<RecQuery(a,b)<<endl;
            }
        }
    }
}
