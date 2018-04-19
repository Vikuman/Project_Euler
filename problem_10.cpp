#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool fun(std::vector<int> v,int n){
	int count=0;
	int count1=0;
	for(int k=0;k<v.size();k++){
		if(v[k]<=(int)pow(n,0.5)){
			count1++;
		}
		else
			break;
	}
	for(int i=0;i<v.size();i++){
		
		if(v[i]<=(int)pow(n,0.5)){
			if(n%v[i]!=0){
			count++;
		}
		else
			break;

		}
		
		
	}
	if(count==count1){
		return true;
	}
	else 
		return false;
}

int main(){
	int number;
	cin>>number;
	std::vector<int> vector_store_prime;
	vector_store_prime.push_back(2);
	vector_store_prime.push_back(3);

	for(int i=4;i<number;i++){				//iteration to all numbers
		if(fun(vector_store_prime,i)){
			vector_store_prime.push_back(i);
		}
	}

	for(int k=0;k<vector_store_prime.size();k++){
		cout<<vector_store_prime[k]<<" ";
	}
}