#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randint(int min, int max) {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number within the range [min, max]
    int randomNumber = rand() % (max - min + 1) + min;

    return randomNumber;
}

int main() {
    int minValue, maxValue;

    cout << "Enter the minimum value: ";
    cin >> minValue;

    cout << "Enter the maximum value: ";
    cin >> maxValue;

    int randomNum = randint(minValue, maxValue);

    cout << "Random number: " << randomNum << endl;

    return 0;
}
