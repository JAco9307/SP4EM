#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	// two random prime numbers
	const int p = 3 , q = 7;

	int n = p * q;

	// calculating th totient Ø(n) = o

	int o = (p - 1) * (q - 1);

	cout << "Ø(n) : " << o << endl;

	// choosing e to be 1< e < m and e co-prime to m 
	int e = 11;

	// d is private key exponent
	int d = 1;


	cout << "d: " << d << endl;

	// encryption

	char c;

	cin >> c;

	cout << "you typed: " << (int)c << endl;

	unsigned long long int m = (unsigned long long int)pow((unsigned long long int)c, e) % n;
	
	cout << "the encrypted nummber is: " << m << endl;

	// decryption
	unsigned long long int cnew = (unsigned long long int)pow(m, d) % n;

	cout << "your decrypted number is: " << cnew << endl;


   
}

