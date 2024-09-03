#include <iostream>
using namespace std;

// Function to print divisors in decreasing order
void printDivisors(int num) {
    for (int i = num; i >= 1; --i) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    while (true) {
        int number;

        // Prompt user for a positive integer
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Check if the entered number is positive
        while (number <= 0) {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> number;
        }

        // Print divisors if a valid number is entered
        printDivisors(number);

        // Ask user if they want to input another number
        char choice;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        // Validate the user's response for yes or no
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

        // Exit the loop if the user chooses 'N' or 'n'
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}

