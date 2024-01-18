#include <iostream>
#include <algorithm>
#define FASTIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
using namespace std;

struct Point {
    int L;
    int R;
} points[10005];

bool compare(Point A,Point B) {
    return A.L<B.L;
}

int main() {
    FASTIO
    int N;
    while(cin>>N) {
        for(int i=0; i<N; i++) {
            cin>>points[i].L>>points[i].R;
        }
        sort(points,points+N,compare);
        int sum=0,LL=0,LR=0;
        for(int i=0; i<N; i++) {
            if(points[i].L>LR) {
                LL=points[i].L;
                LR=points[i].R;
                sum+=LR-LL;
            }
            else if(points[i].R>LR) {
                sum+=points[i].R-LR;
                LR=points[i].R;
            }
        }
        cout<<sum<<endl;
    }
}


