#include <iostream>
#define loop for(int i=0;i<r;i++) for(int j=0;j<c;j++)
using namespace std;

int arr[101][101];
int CP[101][101];

int main() {
    int r,c;
    while(cin>>r>>c) {
        loop
        cin>>arr[i][j];
        loop
        CP[j][i] = arr[i][j];
        swap(r,c);
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++)
                cout<<CP[i][j]<<" ";
            cout<<endl;
        }
    }
}
