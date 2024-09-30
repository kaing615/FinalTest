#include <iostream>
using namespace std;

int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int* rs = new int[n];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        rs[i] = sum(t);
    }

    for (int i = 0; i < n; i++) {
        cout << rs[i] << endl;
    }

    return 0;
}
