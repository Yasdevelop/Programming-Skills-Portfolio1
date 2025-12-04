#include <iostream>
using namespace std;

int main()
{
    double magnitude;

    cout << "Enter the earthquake magnitude: ";
    cin >> magnitude;

    if (magnitude < 2.0)
    {
        cout << "Micro earthquake" << endl;
    }
    else if (magnitude >= 2.0 && magnitude < 4.0)
    {
        cout << "Minor earthquake" << endl;
    }
    else if (magnitude >= 4.0 && magnitude < 5.0)
    {
        cout << "Light earthquake" << endl;
    }
    else if (magnitude >= 5.0 && magnitude < 6.0)
    {
        cout << "Moderate earthquake" << endl;
    }
    else if (magnitude >= 6.0 && magnitude < 7.0)
    {
        cout << "Strong earthquake" << endl;
    }
    else if (magnitude >= 7.0 && magnitude < 8.0)
    {
        cout << "Major earthquake" << endl;
    }
    else if (magnitude > 8.0)
    {
        cout << "Great earthquake" << endl;
    }
    return 0;
}