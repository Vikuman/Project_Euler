#include<iostream>
using namespace std;
long long m=10000000000;

long long modulo_fun(int a){
    // int temp=a;
    long long prod=1;
    for(int i=0 ;i<a;i++){
        if(prod>100000000000){
            prod = prod%m;
        }
        cout<<" , Product : "<<prod<<endl;
        prod = prod*(a%m);
        // cout<<"product : "<<prod<<endl;
    }
    return prod%m;
}
int main(){
    // long m=10;
    long long sum=0;
    for(int i = 1;i<=1000;i++){
     // int temp=i;
     // for(int j=1;j<i;j++){
     //     temp=i*temp;
     //     temp=temp%m;
     // }
        if(sum>100000000000){
            sum=sum%m;
        }
        cout<<"sum : "<<sum<<" , i : "<<i;
     sum = sum + modulo_fun(i);
    }
    cout<<sum%m;
  
}



// (a*b)%m =((a%m)*(b%m))%m 