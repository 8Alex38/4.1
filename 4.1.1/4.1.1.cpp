#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Змінні
    int i;
    double S;

    // Цикл 1: while
    S = 0;
    i = 1;
    while (i <= 15)
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
        i++;
    }
    cout << "    while: " << S << endl;

    // Цикл 2: do-while
    S = 0;
    i = 1;
    do
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
        i++;
    } while (i <= 15);
    cout << " do-while: " << S << endl;

    // Цикл 3: for (зі збільшенням)
    S = 0;
    for (i = 1; i <= 15; i++)
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
    }
    cout << " for, i++: " << S << endl;

    // Цикл 4: for (зі зменшенням)
    S = 0;
    for (i = 15; i >= 1; i--)
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
    }
    cout << " for, i--: " << S << endl;

    return 0;
}
