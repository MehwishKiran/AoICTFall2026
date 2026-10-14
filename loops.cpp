#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the shapes: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    // Shape 1: Right-angled triangle
    cout << "\nShape 1: Right-Angled Triangle\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Shape 2: Inverted triangle
    cout << "\nShape 2: Inverted Triangle\n";
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Shape 3: Square
    cout << "\nShape 3: Square\n";
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Shape 4: Pyramid
    cout << "\nShape 4: Pyramid\n";
    for (int row = 1; row <= n; row++)
    {
        // Print leading spaces
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
