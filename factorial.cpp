#include <iostream>
#include <string>
#include <limits>

using namespace std;

int wholeNum{};
int factorArray[64];
long long totalSum{ 1 }; // totalSum has to be equal to 1 so that it doesn't start out by multiplying with 0, which will make the sum equal to 0.

/*
Use a counter to keep track of numbers, and how many elements we want to be accounted for in the array.
Store the input number for future purposes, i.e. presenting it to the user, remind them of it!

While loop assigns values to elements which descend down until the while loop's "numToFactor" value reached 0, which is when it stops.

For loop goes for the storedNumToFactors + 1 so that the extra count value to 0 is ruled out.
IF the value of the element is equal to 0, then it has to stop before it can be multiplied, otherwise sum will equal to 0 again..
Otherwise the totalSum will be multiplied by the current factorArray element.

I have also built an overflow catcher which will find integers that overflow, the downside is that this program only works with positive integers.

In the end we print out the first input and the sum which creates the factorized number.

There have been several cases of me writing "factoryArray" instead of "factorArray" which left me confused for a small bit of time.
*/


int factorialize(int numToFactor) {
    char preventErrors[999];
    int j = 0;
    int storedNumToFactor = numToFactor;

    while (numToFactor > 0) {
        factorArray[j] = numToFactor;
        numToFactor--;
        j++;
    }
    
    for (int i = 0; i < storedNumToFactor+1; i++) {
        if (factorArray[i] == 0) {
            break;
        } else  {
            totalSum = factorArray[i] * totalSum;
        }
    }

    if (totalSum < 0) {
        throw range_error("Overflow error, try a smaller number!");
        return 0;
    } else {
        cout << "Your factorialized number: " << storedNumToFactor << "!\nIs equal to: " << totalSum; 
    }

}

// Simply calls an input for the user which is used to define the integer for the factorialize() function!

int main() {
    cout << "Provide a number to use: ";
    cin >> wholeNum;
    factorialize(wholeNum);
}
