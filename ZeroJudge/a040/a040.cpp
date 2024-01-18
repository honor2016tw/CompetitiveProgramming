#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m;
    while(cin>>n>>m) {
        bool exist=false;
        for(int i=n; i<=m; i++,n++) {
            int sum=0,dig=0;
            while(i!=0) {
                dig++;
                i/=10;
            }
            i=n;
            while(i!=0) {
                sum+=pow(i%10,dig);
                i/=10;
            }
            i=n;
            if(sum==n) {
                cout<<n<<" ";
                exist=true;
            }
        }
        if(!exist)cout<<"none"<<endl;
    }
}
