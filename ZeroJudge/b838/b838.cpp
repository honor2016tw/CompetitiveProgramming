#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<int> V;
    while(t--) {
        long long int sum=0;
        bool failed=false;
        string input;
        cin>>input;
        for(size_t i=0; i<input.length(); i++) {
            switch(input[i]) {
            case '(':
                V.push_back(0);
                break;
            case ')':
                if(!V.empty() && V.back()==0) {
                    sum++;
                    V.pop_back();
                } else {
                    failed=true;
                }
            }
        }
        if(!V.empty()) failed = true;
        cout<<(failed?0:sum)<<endl;
        V.clear();
    }
}
