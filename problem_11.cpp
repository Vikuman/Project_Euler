#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int max(std::vector<int> v){
	int m=v[0];
	for(int i=1;i<v.size();i++){
		if(v[i]>m){
			m=v[i];
		}
		else
			continue;
	}
	return m;
	// if()
}

int multiply(int a, int b, int c, int d){
	return a*b*c*d;
}
int main(){
	std::vector<int> right;
	std::vector<int> down;
	std::vector<int> diagonal1;
	std::vector<int> diagonal2;
	std::vector<int> last;



	int a[20][20];
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cin>>a[i][j];
		}
	}
	// cout<<a[2][5];
	for(int k=0;k<20;k++){
		for(int l=0;l<17;l++){
			right.push_back(multiply(a[k][l],a[k][l+1],a[k][l+2],a[k][l+3]));
		}
	}
	for(int l=0;l<20;l++){
		for(int k=0;k<17;k++){
			down.push_back(multiply(a[k][l],a[k+1][l],a[k+2][l],a[k+3][l]));
		}
	}

	for(int k=0;k<17;k++){
		for(int l=0;l<17;l++){
			diagonal1.push_back(multiply(a[k][l],a[k+1][l+1],a[k+2][l+2],a[k+3][l+3]));
		}
	}
	for(int k=0;k<17;k++){
		for(int l=19;l>=3;l--){
			diagonal2.push_back(multiply(a[k][l],a[k+1][l-1],a[k+2][l-2],a[k+3][l-3]));
		}
	}
// for(int i=0;i<right.size();i++){
		
// 		cout<<endl<<right[i]<<" "<<endl;
// 	}

	// cout<<endl<<"hehhe : "<<max(right)<<endl;
	last.push_back(max(right));
	last.push_back(max(down));
	last.push_back(max(diagonal1));
	last.push_back(max(diagonal2));

	cout<<max(last);



	


}