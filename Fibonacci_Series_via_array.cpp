#include<iostream>
using namespace std;

void Fibonacci(int arr[], int n) {
    arr[0] = 0;
    arr[1] = 1;
    cout << "Fibonacci Series using array is :\n";
    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    cout << "Fibonacci series upto " << n << " terms is :\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of terms:\n";
    cin >> n;
    int arr[n];
    Fibonacci(arr, n);
    return 0;
}
}
