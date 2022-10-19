#include<iostream>

using namespace std;

bool isPrime (int num){
    int i = 2;

    while(i<num){
        if(num%i==0){
            return false;
        } 
        i+=1;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout<<"Its Prime"<<endl;
    } else{
        cout << "Its not prime" <<endl;
    }
}

