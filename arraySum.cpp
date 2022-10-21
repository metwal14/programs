#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sumVal = 0;
    for(int i = 0;i<n;i++){
        sumVal+=arr[i];
    }
    return sumVal;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin >> n;
    cout<<endl;
    int arr[100];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum is "<<sum(arr,n);

}