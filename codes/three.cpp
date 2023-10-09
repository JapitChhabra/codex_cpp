#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    tm* timeInfo = localtime(&now);
    
    cout << "Current date and time: " << asctime(timeInfo) << endl;
    
    return 0;
}
