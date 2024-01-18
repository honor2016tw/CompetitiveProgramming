#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,k;
    int p[26];
    for(int i=0; i<26; i++) p[i]=0;
    cin>>s;
    cin>>k;
    for(int i=0; i<s.length(); i++) {
        p[((s[i]+(k[i]-'a'))-97)%26]++;
    }
    for(int i=0; i<25; i++) cout<<p[i]<<" ";
    cout<<p[25];
}