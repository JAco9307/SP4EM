#include <iostream>
using namespace std;

int powermod(int x, unsigned int y, int p)
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
    int x = 22;
    int y = 2;


    int p = 73;
    int q = 97;
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e = 97;
    int d = 2209;

    int message = 0;
    cout << "\n" << "Encryption key = " << e;
    cout << "\n" << "Decryption key = " << d;
    cout << "\n" << "n = pq = " << n;
    cout << "\n" << "e = " << e;
    cout << "\n" << "phi = " << phi << endl;
    while (++message < n)
    {
        int c = powermod(message, e, n); //encrypt the message
        int m = powermod(c, d, n);
        cout << endl << "Send: " << message << " = " << m << " recieve";
        if (message == c) {
            cout << " bad encryption";
        }
    }
}