#include <iostream>
using namespace std;

int Matrix[11][11];

void PrintArr(int Arr[][11],int r,int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<Arr[i][j];
      if(j!=c-1) cout<<" ";
    }
    cout<<endl;
  }
}

void Rotate(int Arr[][11],int r,int c){
  int tmp[11][11];
  for(int i=0;i<c;i++)
    for(int j=0;j<r;j++)
      tmp[i][j]=Arr[j][c-i-1];
  for(int i=0;i<c;i++)
    for(int j=0;j<r;j++)
      Arr[i][j]=tmp[i][j];
}

void Flip(int Arr[][11],int r,int c){
  for(int i=0;i<r/2;i++)
    for(int j=0;j<c;j++)
      swap(Arr[i][j],Arr[r-i-1][j]);
}

int main(){
  int R,C,M,Oper[11];
  while(cin>>R>>C>>M){
    for(int i=0;i<R;i++){
      for(int j=0;j<C;j++) 
        cin>>Matrix[i][j];
    }
    for(int i=0;i<M;i++) cin>>Oper[i];
    for(int i=M-1;i>=0;i--){
      switch(Oper[i]){
        case 0:
          Rotate(Matrix,R,C);
          swap(R,C);
          break;
        default:
          Flip(Matrix,R,C);
          break;
      }
    }
    cout<<R<<" "<<C<<endl;
    PrintArr(Matrix,R,C);
  }
}
