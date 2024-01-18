#include<iostream>
using namespace std;

int main() {
    int arr[10],n,cnt=0;
    for(int i=0; i<10; i++) cin>>arr[i];
    cin>>n;
    for(int j=0; j<10; j++) {
        if(n+30>=arr[j]) cnt++;
    }
    cout<<cnt<<endl;

}
