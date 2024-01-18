#include <iostream>
#include <algorithm>
using namespace std;

struct point {
    int x,y;
};

bool cmp(point a,point b) {
    if(a.x <  b.x) return true;
    else if(a.x == b.x  && a.y < b.y)return true;
    else return false;
}

point P[1001];

int main() {
    int n;
    while(cin>>n) {
        for(int i=0; i<n; i++) {
            cin>>P[i].x>>P[i].y;
        }
        sort(P,P+n,cmp);
        for(int i=0; i<n; i++) cout<<P[i].x<<" "<<P[i].y<<endl;
    }
}
