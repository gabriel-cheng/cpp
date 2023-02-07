#include <iostream>
#include <string>

#define name "Gabriel"

using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < sizeof(arr)/4; i++) {
        arr[i] = i;

        cout << arr[i];
        cout << "\n";
    }
    cout << "\nTamanho do array: ";
    cout << sizeof(arr)/4;

    return 0;
}