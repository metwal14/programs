#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int s=0,m=1;
        cout<<"n "<<n<<endl;
    while(n!=0){
        s+=n%10;
        m*=n%10;
        n/=10;
    }
    cout<<"diff is "<<m-s<<endl;

}