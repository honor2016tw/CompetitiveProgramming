#include <iostream>
using namespace std;

int n,arr[14],path[8];
bool first=true;

void DFS(int depth,int index) {
    if(depth == 6) {
        for(int i=0; i<depth-1; i++)
            cout<<path[i]<<" ";
        cout<<path[depth-1]<<endl;
    } else {
        for(int i=index+1; i<=n; ++i) {
            path[depth] = arr[i];
            DFS(depth+1,i);
        }
    }
}

int main() {
    while(true) {
        cin>>n;
        if(!n) break;
        if(!first)
            cout<<endl;
        first = false;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        DFS(0,0);
    }
}
