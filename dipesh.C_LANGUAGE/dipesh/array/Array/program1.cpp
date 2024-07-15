#include<iostream>
using namespace std;

int main() {

    int numbers[] = {100, 200, 300, 400, 500};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    
    int temp = numbers[0];
    numbers[0] = numbers[n - 1];
    numbers[n - 1] = temp;

    
    cout << "Rearranged Array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i];
        if (i < n - 1)
            cout << ",";
    }
 return 0;
}