#include <iostream>
using namespace std;

int power(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p; 

    while (y > 0)
    {
        if (y & 1) res = (res * x) % p;
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    int x = 12;
    int y = 12;
    int p = 5;
    cout << x << "^" << y << " mod(" << p << ") = " << power(x, y, p) << endl << endl;
    return 0;
}