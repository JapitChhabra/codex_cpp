#include <iostream>
using namespace std;

int main() {
    float floatNumber;
    
    cout << "Enter a floating-point number: ";
    cin >> floatNumber;
    
    int intNumber = static_cast<int>(floatNumber);
    
    cout << "Original number: " << floatNumber << endl;
    cout << "Typecasted number: " << intNumber << endl;
    
    return 0;
}
