#include <iostream>
using namespace std;

class SatorSquare {
  
    int n;
    char tablet[10][10];

    SatorSquare(int n, const char tablet[][10]) : n(n) {
        for (int i = 0; i < n; i++) {
            for (int x = 0; x < n; x++) {
                this->tablet[i][x] = tablet[i][x];
            }
        }
    }

    bool isSS() {
        for (int i = 0; i < n; i++) {
            for (int x = 0; x < n; x++) {
                if (tablet[i][x] != tablet[n - i - 1][n - x - 1] ||
                    tablet[i][x] != tablet[x][i] ||
                    tablet[i][x] != tablet[n - x - 1][n - i - 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    const char tablet[2][10] = { {'A', 'B'}, {'B', 'A'} };
    SatorSquare satorSquare(2, tablet);
    cout << satorSquare.isSS() << endl;

    return 0;
}