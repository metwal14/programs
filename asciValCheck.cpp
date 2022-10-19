#include <iostream>
using namespace std;

int main() {
    char ch='9';

    if(int(ch)>=65 && int(ch)<=90){
        cout << "This is upper case" << endl;
    } else if(int(ch)>=97 && int(ch)<=122){
        cout << "This is lower case" << endl;
    } else if(int(ch)>=48 && int(ch)<=57){
    cout << "This is numeric" << endl;
    }

}
