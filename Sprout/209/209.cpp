#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1005];
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++)
        cout<<arr[arr[i]]<<endl;
}