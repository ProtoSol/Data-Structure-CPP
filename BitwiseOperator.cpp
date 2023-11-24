#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 3;
    // | stands for OR operation;
    int c = a | b;
    cout << c << endl;
    // & stands for AND Operation;
    c = a & b;
    cout << c << endl;
    // ~ stands for NOT Operation the output comes out to be -ve and +1 to the output;
    c = ~a;
    cout << c << endl;
    // ^ stands for XOR Operation;
    c = a ^ b;
    cout << c << endl;
    // We can make NAND, NOR, EXNOR using brackets;
    c = ~(a ^ b);
    cout << c << endl;
    // Left shift Operator is used through << and Right Shift Throuh >> ;
    cout << (5 << 2) << endl;
    cout << (5 >> 2) << endl;
    // 0 is used for positive number shifting
    // For negativve number the number is decided by the compiler while shifting;

    return 0;
}