#include <iostream>
using namespace std;

int Min(int a,int b) {
    int smaller=100000;
    if(a<smaller) smaller=a;
    if(b<smaller) smaller=b;
    return smaller;
}
int main() {
    int DP[105],coins[]= {1,5,10,12,16,20};
    int N;
    cin>>N;
    memset(DP,100,sizeof(DP));
    DP[0]=0;
    for(int i=0; i<6; i++) {
        for(int j=coins[i]; j<=N; j++) {
            DP[j]=Min(DP[j],DP[j-coins[i]]+1);
        }
    }
    cout<<DP[N]<<endl;
}
