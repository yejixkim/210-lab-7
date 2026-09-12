// COMSC 210 | Lab 7 | Yeji Kim
#include <iostream>

#include <string>

using namespace std;

const int SIZE = 5;

// reverse dynamic string array
// returns pointer to modified array
string * reverseArray(string * names) {
    for (int i = 0; i < SIZE; i++) {
        string temp = * (names + i);
        *(names + i) = * (names + (SIZE - 1 + i));
        *(names + (SIZE - 1 + i)) = temp;
    }

    return names;
}

// display elements of string array
void displayArray(string * names) {
    for (int i = 0; i < SIZE; i++) {
        cout << * (names + i) << " ";
    }

    cout << endl;
}

int main() {
    // create dynamic string array
    string * names = new string[SIZE];

    // populate array with 5 names
    *(names + 0) = "Abby";
    *(names + 1) = "Bob";
    *(names + 2) = "Charlie";
    *(names + 3) = "Daryl";
    *(names + 4) = "Erika";

    // display og array
    cout << "Original array: ";
    displayArray(names);

    // reverse the array
    reverseArray(names);

    // display reversed array
    cout << "Reversed array: ";
    displayArray(names);

    // free allocated mem
    delete[] names;

    return 0;
}