#include<iostream>
#include<math.h>
using namespace std;

long nth_triangle_number(int n){
	return (n*(n+1))/2;
}
int No_of_divisors(int a){
	// int count=0;
	// for(int i=2;i<=a/2;i++){
	// 	if(a%i==0){
	// 		count++;
	// 	}
	// }
	// return count+2;
	int nod = 0;
	int sqrt = (int)pow(a,0.5);

	for(int i=1;i<= sqrt; i++){
		if(a%i ==0){
			nod=nod+2;
		}
	}
	if (sqrt*sqrt == a){
		nod--;
	}
	return nod;
}

int main(){
	int i=1;
	while(1){
		// cout<<endl<<"i : "<<i<<" "<<endl;
		if(No_of_divisors(nth_triangle_number(i))>500){
			cout<<nth_triangle_number(i);
			break;
		}
		cout<<No_of_divisors(nth_triangle_number(i))<<" i : "<<i<< endl;
		i++;
	}
}



// 1,2,4,8,16

