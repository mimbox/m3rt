#include <iostream>
#include <math.h>
using namespace std;
long int pgcd(long int a, long int b) {
    if (b == 0)
        return a;
    else
        return pgcd(b, a % b);
}
int main() {
    long int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    long int result = pgcd(num1, num2);

    cout << "PGCD: " << result << endl;

    return 0;
}

