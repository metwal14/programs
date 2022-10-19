#include<iostream>
#include <cmath>

using namespace std;

int main() {
        int f;
    cout<<"enter Fahrenheit ";
    cin >> f;
    double c; 
    c = (f-32)*(5.0/9.0);
    cout << " the " << f << " F is equal to " << floor(c) << " C"<<endl;
}   