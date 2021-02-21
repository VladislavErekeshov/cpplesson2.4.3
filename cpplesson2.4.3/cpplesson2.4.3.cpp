#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    cin >> x;
    a = x / 100 % 10;
    b = x / 10 % 10;
    c = x % 10;
    cout << (9 - a) * 100 + (9 - b) * 10 + 9 - c;
    return 0;
}