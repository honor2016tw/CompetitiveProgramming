#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin>>N;
    if(N>9999) {
        cout<<"|"<<"____"<<setfill('0')<<setw(4)<<N%10000<<"|"<<endl;
    } else {
        cout<<"|"<<setfill('_')<<setw(8)<<N<<"|"<<endl;
    }
}
