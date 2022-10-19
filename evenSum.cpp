
#include<iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int sum = 0;
    int i = 1;
    while(i<=num){
        if(i%2==0){
             sum=sum+i;
        }
       
        i+=1;
    }
    cout<<"the sum is "<<sum << endl;

}
