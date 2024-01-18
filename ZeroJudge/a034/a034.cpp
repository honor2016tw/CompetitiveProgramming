#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int arr[100],cnt=0;
        while(n!=0) {
            arr[cnt]=n%2;
            n/=2;
            cnt++;
        }
        for(int i=cnt-1; i>=0; i--) cout<<arr[i];
        cout<<endl;
    }
}
