#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int t;
    while (1) {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}

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
    int q = 13;
    int n = p * q;//calculate n
    int phi = (p - 1) * (q - 1);
    int e = 97;
    int d = 481;

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