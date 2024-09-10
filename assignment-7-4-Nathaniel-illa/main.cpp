#include "main.hpp"

void insertone(int number[], int &N, int usernum) {
    // Find the correct position to insert the new number
    int i = 0;
    while (i < N && number[i] < usernum) {
        i++;
    }

    // Shift elements to the right to make space for the new number
    for (int j = N; j > i; j--) {
        number[j] = number[j - 1];
    }

    // Insert the new number
    number[i] = usernum;
    N++; // Increase the size of the array
}

void deleteone(int number[], int &N, int usernum) {
    // Find the position of the number to be deleted
    int i = 0;
    while (i < N && number[i] != usernum) {
        i++;
    }

    // If the number is found, shift elements to the left to fill the gap
    if (i < N) {
        for (int j = i; j < N - 1; j++) {
            number[j] = number[j + 1];
        }
        N--; // Decrease the size of the array
    }
}

void printout(int number[], int last) {
    for (int i = 0; i < last; i++) {
        cout << setw(5) << number[i];
    }
    cout << endl;
}

int main() {
    const int SIZE = 100;
    int usernum;
    int N = 10;
    int number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

    cout << "Enter the number to insert\n";
    cin >> usernum;
    printout(number, N);
    insertone(number, N, usernum);
    printout(number, N);

    cout << "Enter the number to delete\n";
    cin >> usernum;
    deleteone(number, N, usernum);
    printout(number, N);

    return 0;
}