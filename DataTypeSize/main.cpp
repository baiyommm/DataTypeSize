#include <iostream>
using namespace std;

int main() {
    
    // Data type's size and limits
    
    // Shorts
    cout << "The size of a short is: "<< sizeof(short) << endl;
    cout << "The Max limit of a short is: " << numeric_limits<short>::max() << endl;
    cout << "The Min limit of a short is: " << numeric_limits<short>::min() << endl;
    
    cout << endl;
    
    // Double
    cout << "The size of a double is: "<< sizeof(double) << endl;
    cout << "The Max limit of a double is: " << numeric_limits<double>::max() << endl;
    cout << "The Min limit of a double is: " << numeric_limits<double>::min() << endl;
    
    return 0;
}
