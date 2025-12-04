#include <iostream>
using namespace std;

int main()
{
    const int DAYS = 7;
    float temperatures[DAYS];
    float sum = 0.0;
    int above25 = 0;

    cout << "Enter the temperatures for 7 days:";
    for (int i = 0; i < DAYS; i++)
    {
        cout << "Day" << i + 1 << ": ";
        cin >> temperatures[i];
        sum += temperatures[i];
        if (temperatures[i] > 25.0)
        {
            above25++;
        }
    }

    float average = sum / DAYS;

    cout << "\nAverage temperature: " << average << "°C" << endl;
    cout << "Number of days above 25°C: " << above25 << endl;

    return 0;
}
