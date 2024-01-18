#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a,int b) {
    return a>b;
}

int main() {
    int t,x,y;
    while(cin>>t) {
        while(t--) {
            vector<int> max;
            cin>>x>>y;
            while(true) {
                max.push_back(x);
                if(x>y || x==1) break;
                if(!(x%2)) x/=2;
                else x=x*3+1;
            }
            sort(max.begin(),max.end(),cmp);
            cout<<max[1]<<endl;
        }
    }
}
