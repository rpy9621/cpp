//C++ program to find a prime number btween two number's
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter num2: ";
    cin >> num2;
    
    for (int num = num1; num <= num2; num++) {
        int i;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                cout << "Non_prime\n";
                break;
            }
        }
        
        if (i == num) {
            cout << "Prime_num: " << num << endl;
        }
    }
    
    return 0;
}
