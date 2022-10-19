#include<iostream>
#include<math.h>
using namespace std;

 int bitwiseComplement(int n) {
        int answer = 0;
        int i = 0;
        while(n!=0){
            int bit = n&1;
            cout<<"bit is "<<bit<<endl;
            if(bit==0){
                answer = answer+pow(2,i);
            }
            n = n>>1;
            i++;
        }
        return answer;
    }

int main(){
    // int n;
    // cin>>n;
    // int ans=0;
    // int i =0;
    // while(n!=0){
    //     //for finding the last bit
    //     int bit = n&1;
    //     // for getting answer in rev
    //     ans =(bit*pow(10,i))+ans;
    //     //for getting next bit. shifting right
    //     n=n>>1;
    //     i++; 
    // }
    cout << "answer is "<<bitwiseComplement(0);
}