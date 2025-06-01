#include <iostream>
using namespace std;

class Counter
{
private:
    static int count; // Static variable to count objects
public:
    Counter()
    {
        count++; // Increment count when an object is created
    }

    static int getCount()
    {
        return count; // Return the current count
    }
};

// Initialize the static count variable
int Counter::count = 0;

int main()
{
    Counter c1; // Create first object
    Counter c2; // Create second object
    Counter c3; // Create third object

    // Display the count of objects created
    cout << "Total objects created: " << Counter::getCount() << endl;

    return 0;
}
