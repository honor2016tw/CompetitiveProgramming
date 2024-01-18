#include <iostream>
using namespace std;

int main() {
    int m;
    while(cin>>m) {
        switch((m+2)/3) {
        case 1:
            cout<<"spring"<<endl;
            break;
        case 2:
            cout<<"summer"<<endl;
            break;
        case 3:
            cout<<"fall"<<endl;
            break;
        case 4:
            cout<<"winter"<<endl;
            break;
        }
    }
}
