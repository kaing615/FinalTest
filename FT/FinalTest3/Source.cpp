#include <iostream>
#include <string>
using namespace std;

string encodeString(string str) {
	string encoded = "";
	int count = 1;

	for (int i = 0; i < str.length(); i++) {
		if (i < str.length() - 1 && str[i] == str[i + 1]) {
			count++;
		}
		else {
			encoded += str[i];
			encoded += to_string(count);
			count = 1;
		}
	}

	return encoded;
}

int main() {
	string str;
	cin >> str;

	string rs = encodeString(str);
	cout << rs << endl;

	return 1;
}