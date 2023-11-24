#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter The Number" << endl;
    // cin.get() is used to grab the ascii value of the input and convert it into int value;
    n = cin.get();
    cout << "The ASCII value of n : " << n << endl;
    cin >> n;
    cout << "The Actual Value Of n : " << n << endl;
    return 0;
}
