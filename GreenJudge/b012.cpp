#include <iostream>
using namespace std;
#define MAX 1000

int main()
{
    int sum = 0, s2i[MAX];
    string A;
    cin >> A;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == 'I')
            s2i[i] = 1;
        if (A[i] == 'V')
            s2i[i] = 5;
        if (A[i] == 'X')
            s2i[i] = 10;
        if (A[i] == 'L')
            s2i[i] = 50;
        if (A[i] == 'C')
            s2i[i] = 100;
        if (A[i] == 'D')
            s2i[i] = 500;
        if (A[i] == 'M')
            s2i[i] = 1000;
    }
    sum=s2i[A.length()-1];
    for(int i=A.length()-1;i>0;i--){
        if(s2i[i]==s2i[i-1])
            sum+=s2i[i-1];
        else if(s2i[i]<s2i[i-1])
            sum+=s2i[i-1];
        else if(s2i[i]>s2i[i-1])
            sum-=s2i[i-1];
    }
    cout<<sum<<endl;
}
