#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int coin_type[6] = {1,5,10,12,16,20};
    vector<int> change(101,1e9);
    change[0] = 0;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = coin_type[i] ; j <= n ; j++){
            change[j] = min(change[j],change[j-coin_type[i]]+1);
        }
    }
    cout<<change[n];
}
