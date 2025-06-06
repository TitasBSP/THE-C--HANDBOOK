#include <iostream>
#include <string>
#include <limits>

using namespace std;

int wholeNum{};
int factorArray[64];
long long totalSum{ 1 };

int factorialize(int numToFactor) {
    int j = 0;
    int storedNumToFactor = numToFactor;

    while (numToFactor > 0) {
        factorArray[j] = numToFactor;
        numToFactor--;
        j++;
    }
    
    for (int i = 0; i < storedNumToFactor + 1; i++) {
        if (factorArray[i] == 0) {
            break;
        } else {
            totalSum = factorArray[i] * totalSum;
            if (totalSum < 0) {
                throw range_error("Overflow error, try a smaller number!");
            }
        }
    }

    cout << "Your factorialized number: " << storedNumToFactor << "!\nIs equal to: " << totalSum << endl;
    return 0; // Added return statement
}

int main() {
    cout << "Provide a number to use: ";
    cin >> wholeNum;
    factorialize(wholeNum);
}