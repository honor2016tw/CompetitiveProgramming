#include <iostream>
#define MAX 1000
using namespace std;

int main() {
    int N,max=-1,maxi;
    long long arr[25],arr2[25]= {0};
    cin>>N;
    for(int i=0; i<N; i++)
        cin>>arr[i];
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            if(arr[i]==arr[j]) {
                arr[j]=0-j-i;
                arr2[i]++;
            }

        }
    }
    for(int i=0; i<N; i++) {
        if(arr2[i]>max) {
            max=arr2[i];
            maxi=i;
        }
    }
    cout<<arr[maxi]<<" "<<max+1<<endl;
}
