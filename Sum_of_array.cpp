// Sum of array elements program
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array:\n";
    cin >> n;
    int sum = 0;
    int arr[n];
    cout << "Enter " << n << " elements in the array:\n";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Entered array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    
    cout << "\nSum of array elements is: " << sum;

    return 0;
}

