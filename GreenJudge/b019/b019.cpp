#include <iostream>
using namespace std;

void sort(int n,int arr[]) {
    int tmp;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j]<arr[j+1]) {
                tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

int main() {
    int N,arr[105];
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    sort(N,arr);
    for(int i=0; i<N; i++) {
        cout<<arr[i]<<" ";
    }
}
