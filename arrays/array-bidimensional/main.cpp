#include <iostream>
#include <string>

#define name "Gabriel"

using namespace std;

int main() {
    int arr[2][2];
    int arrMulti[5][3][4][6];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            arr[i][j] = i;
        
            cout << arr[i][j];
        }
    }

    return 0;
}