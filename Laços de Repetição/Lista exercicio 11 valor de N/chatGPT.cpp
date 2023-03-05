#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) // Loop through rows
    {
        for (int j = 1; j <= 10; j++) // Loop through columns
        {
            cout << i * j << " "; // Print the product of i and j
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}