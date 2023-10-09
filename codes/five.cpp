#include <iostream>
using namespace std;

int main() {
    const string correctPassword = "password123";
    string enteredPassword;
    
    do {
        cout << "Enter the password: ";
        cin >> enteredPassword;
    } while (enteredPassword != correctPassword);
    
    cout << "Access granted!" << endl;
    
    return 0;
}
