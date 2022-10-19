#include<iostream>
using namespace std;

int main(){

    int n,a=0,b=1;
    cout<<"Enter value of n"<<endl;
    cin >> n;
    cout<<a<< " "<<b<<" "; 
    for(int i =1 ;i<=n;i++){
        int sum = a+b ;
        cout << sum << " ";
        a = b;
        b = sum;
        
    }
}
//fibonnaci
// 0,1,1,2,3,5,8,13,21...