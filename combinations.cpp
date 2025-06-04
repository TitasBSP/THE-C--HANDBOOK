#include <iostream>
#include <string>

using namespace std;

/*
GOALS:
- Get player to input the amount of players that are "assisting", this will determine the amount of possible combinations
- Insert that number into a function that calculates
- Prints out in main, remember to make the function for calculating separate.
*/

int possibleCombinations{};
int saveForExplain{};

int calculateCombinations(int playerAmount) {

    int player_health = 100;

    while (player_health > 0) {
        player_health--;
        possibleCombinations++;
    }

    if (player_health == 0) {
        saveForExplain = possibleCombinations;
        possibleCombinations *= playerAmount;
    }

    cout << "\nPossible assist combinations: " << possibleCombinations;
    cout << "\nExplanation:\nThere are a total of " << saveForExplain << " different possible combinations per player, but there are " << playerAmount << " players assisting, which allows this many combinations."; 

}
int main() {
    int num{};

    cout << "Enter amount of players assisting: ";
    cin >> num;

    calculateCombinations(num);
}