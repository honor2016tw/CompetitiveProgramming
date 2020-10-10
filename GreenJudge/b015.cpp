#include <iostream>
#include <sstream>
using namespace std;

int main(){
	bool found=false;
	int j,i;
	string A,tmp;
	stringstream ss;
	for(i=0;i<3;i++){
		getline(cin,A);
		ss.clear();
		ss.str(A);
		j=0;
		while(true){
			ss>>tmp;
			if(ss.fail()) break;
			if(tmp=="BILL"){
				found=true;
				break;
				}
			j++;
		}
		if(found==true) break;
	}
	if(found)
	   cout<<i+1<<" "<<j+1<<endl;
	else 
		cout<<"NO"<<endl;	
}
