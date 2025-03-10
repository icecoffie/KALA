#include <iostream>

using namespace std;

void printLetter(int letter[7][5]) {
    for (int i = 0; i < 7; i++) { 
        for (int j = 0; j < 5; j++) { 
            cout << (letter[i][j] ? "1" : " ") << " ";
        }
        cout << endl;
    }
    cout << endl; 
}

int main() {
    int K[7][5] = {
        {1, 0, 0, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0}
    };

    int A[7][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1}
    };

    int L[7][5] = {
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1}
    };

    printLetter(K);
    printLetter(A);
    printLetter(L);
    printLetter(A);

    return 0;
}
