#include<iostream>
using namespace std;
int BinaryToDecimal(int n){
    int decnum=n, ans=0, pow=1;
    while(decnum>=0){
        int rem=decnum%2;
        decnum=decnum/2;
        ans+=rem*pow;
        pow*=2;
    }
    
    return ans;
}

int main(){

    int n=10;

    cout<<"The decimal num is="<<BinaryToDecimal(n)<<endl;

    return 0;
}