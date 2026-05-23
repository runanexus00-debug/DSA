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

int BinaryToDec(int binarynum){
    int ans=0, pow=1;
    while(binarynum>0){
        int rem= binarynum%10;
        ans+=(rem*pow);

        binarynum= binarynum/10;
        pow*=2;
    }
    return ans;
}   

int main(){
    int decnum=10;
    int binarynum=20;
    for(int i=1;i<=10;i++){
        cout<<"The Dec num="<< DecimalToBinary(i)<< endl;
        cout<<"The bin num="<< BinaryToDec(i)<< endl;
    
    }
     cout<<"the bin num=";
    cout<< BinaryToDec(binarynum)<< endl;
    cout<<"the dec=";
    cout<< DecimalToBinary(decnum)<< endl;
    cout<< (12>>1)<<endl;
    cout<<(6&10)<<endl;
    return 0;
}