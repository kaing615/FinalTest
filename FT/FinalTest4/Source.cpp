#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

bool isSuperPrimeNumber(int n) {
	if (!isPrime(n)) return false;

	while (n > 0) {
		if (!isPrime(n)) return false;
		n /= 10;
	}

	return true;
}

int main() {
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		if (isSuperPrimeNumber(i)) cout << i << " ";
	}
	cout << endl;

	return 1;
}