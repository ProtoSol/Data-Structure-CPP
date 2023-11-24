#include<iostream>
using namespace std;
int main()
{
    int n, i = 2, flag = 0;
    cin >> n;
    while (n != 0)
    {
        if (n%i == 0)
        {
            cout << "Not Prime";
            break;
        }
        else
        {
            flag = 1;
        }
        n--;
        i++;0
        
    }
    if( flag == 1 )
    {
        cout << "Prime Number";
    }
    
    return 0;
}