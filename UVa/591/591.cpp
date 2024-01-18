#include <iostream>
using namespace std;

int arr[55];

int main() {
    int n,set=1;
    while(cin>>n) {
        int sum=0,cnt=0;
        if(n==0) break;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
        int aver=sum/n;
        for(int i=0; i<n; i++) {
            if(arr[i]>aver) cnt+=arr[i]-aver;
        }
        cout<<"Set #"<<set<<endl;
        cout<<"The minimum number of moves is "<<cnt<<"."<<endl;
        cout<<endl;
        set++;
    }
}
