#include <iostream>
using namespace std;
int arr[10005];
int main() {
    int n;
    while(cin>>n) {
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=n-1; i>=0; i--) {
            if(arr[i]>=0) cout<<0<<endl;
            else cout<<arr[i]<<endl;
        }
    }
}
