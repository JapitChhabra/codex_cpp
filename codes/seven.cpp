#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 1 and 20 (excluding 10): ";
    
    for (int i = 2; i <= 20; i += 2) {
        if (i == 10) {
            continue;
        }
        cout << i << " ";
    }
    
    cout << endl;
    
    return 0;
}
