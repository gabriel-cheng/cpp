#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < sizeof(arr)/4; i++) {
        arr[i] = i;
    }

    for(int i = 0; i < sizeof(arr)/4; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}