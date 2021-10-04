#include <iostream>
#include <algorithm>
#define MAXN 10001
#define ll long long
using namespace std;


ll int T[MAXN];

void Sort(ll int arr[],int N){
    for(int i=0;i<N;i++){
        while(arr[i]<arr[i-1]&& i>0){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }
}

int main(){
    int N;
    while(cin>>N){
        ll int sum=0;
        for(int i=0;i<N;i++) cin>>T[i];
        Sort(T,N);
        for(int i=1;i<N;i++){
            for(int j=0;j<i;j++) sum+=T[j];
        }
        cout<<sum*100<<endl;
    }
}
