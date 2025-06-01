#include <iostream> 
using namespace std;
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b; // Return the greater of the two values
}

int main() {
    // Call the findMax function with integer arguments (4, 7) and print the result
    cout << "Max of 4 and 7: " << findMax(4, 7) << endl;

    // Call the findMax function with double arguments (3.5, 2.5) and print the result
    cout << "Max of 3.5 and 2.5: " << findMax(3.5, 2.5) << endl;

    return 0;
}
