#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime.
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself.
        }
    }
    return true; // If no divisors are found, it's prime.
}

int main() {
    int s;
    cout << "Enter a number: ";
    cin >> s;

    if (isPrime(s)) {
        cout << s << " is a prime number" << endl;
    } else {
        cout << s << " is not a prime number" << endl;
    }

    return 0;
}
