#include <iostream>
#include <cmath>
using namespace std;

bool GCD_if_1(unsigned int v, unsigned int u);
unsigned long long int power(unsigned long long int number, unsigned int p);
int modulus(int m, int e , int n);

int main()
{
	// two random prime numbers
	const int p = 61 , q = 53;

	int n = p * q;

	cout << "n: " << n << endl;
	// calculating th totient Ø(n) = o

	int o = (p - 1) * (q - 1);

	cout << "Ø(n) : " << o << endl;

	// choosing e to be 1< e < m and e co-prime to m 
	int e = o-2;

	while (GCD_if_1(e, o) == false)
	{
		e--;
	}

	cout << "e: " << e << endl;

	// d is private key exponent
	// de - 1 = x * o
    unsigned long int x = 1;
	unsigned long int d = n;

	while (true)
	{
		if ((1 + (x * n)) % e == 0)
		{
			d = (1 + (x * n)) / e;
			break;
		}
		x++;
	}
	
	
	cout << "x: " << x << endl;
	





	cout << "d: " << d << endl;

	// encryption

	//char m;
	int m = 6;
	//cin >> m;

	cout << "28^10 % 47: " << modulus(4 , 5 , 6);


   
}

unsigned long long int power(unsigned long long int number , unsigned int p)
{
	for (int i = 1; i < p; i++)
	{
		number = number * number;
	}

	return number;
}

bool GCD_if_1(unsigned int v, unsigned int u)
{
	int i = u;

	while (true)
	{
		if (v%i == 0 && u%i == 0 )
		{
			if (i != 1)
			{
				return false;
			}
			else
				return true;
		}

		i--;
	}

	
}

int modulus(int m , int e , int n)
{
	// m^e mod n = x
	bool mod = false;
	int x = 1; 
	int d = 1;
	bool startbit = false;
	int numbers[20];
	
	int turns;

	if (e % 2 != 0)
	{
		turns = (e / 2) + 1;
	}
	else turns = e / 2;
	int bin = 128;

	numbers[0] = m;


	for (int i = 1; i <= 128; i++)
	{
		if (numbers[i-1] > n )
		{
			numbers[i] = numbers[i - 1] % n;
		}
		else
		{
			if ((numbers[i - 1] * numbers[i - 1]) > n)
			{
				numbers[i] = (numbers[i - 1] * numbers[i - 1]) % n;
			}
			else numbers[i] = numbers[i - 1] * numbers[i - 1];
			
		}
		
	}
	

	
		

	return x % n;
}

