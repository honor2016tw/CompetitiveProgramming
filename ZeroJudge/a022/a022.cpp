#include <iostream>
#include <string>
using namespace std;

string arr;
int main() {
    while(cin>>arr) {
        bool flag=true;
        for(size_t i=0; i<arr.length()/2; i++) {
            if(arr[i]!=arr[arr.length()-i-1]) {
                flag=false;
                break;
            }
        }
        cout<<((flag)?"yes":"no")<<endl;
    }
}
