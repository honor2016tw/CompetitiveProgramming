#include <iostream>
using namespace std;

struct score{
	int num,subj[5],total;
};

void SortT(int n,score s[]){
	score tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(s[j].total<s[j+1].total){
				tmp=s[j+1];
				s[j+1]=s[j];
				s[j]=tmp;
			}
		}
	}
}
void SortM(int n,score s[]){
	score tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
		if(s[j].total>s[j+1].total) continue;
		if(s[j].subj[2]<s[j+1].subj[2]){
				tmp=s[j+1];
				s[j+1]=s[j];
				s[j]=tmp;
			}
		}
	}
}

int main(){
	int N;
	cin>>N;
	score *s;
	s = new score[N];
	for(int i=0;i<N;i++){
		cin>>s[i].num;
		for(int j=0;j<5;j++){
			cin>>s[i].subj[j];
			s[i].total+=s[i].subj[j];
		}
	}
	SortT(N,s);
	SortM(N,s);
	for(int i=0;i<N;i++){
		cout<<s[i].num<<endl;
	}

}
