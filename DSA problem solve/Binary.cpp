#include<iostream>
using namespace std;

int DecimalToBinary(int decnum){
    int ans=0, pow=1;
    while(decnum>0){
      int rem= decnum%2;
      decnum=decnum/2;
      ans+=(pow*rem);
      pow*=10;

    }
    return ans;
}

int main(){
    int decnum=10;
    for(int i=1;i<=16;i++){
        cout<< DecimalToBinary(i)<< endl;

    }
    
    return 0;
}