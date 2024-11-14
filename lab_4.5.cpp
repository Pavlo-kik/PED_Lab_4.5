#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
    double R, a, b, x, y;

    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++) {
        cout << "R = "; cin >> R;
        cout << "a = "; cin >> a;
        cout << "b = "; cin >> b;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((a > R && b < R) && (pow(y, 2) <= pow(R, 2) - pow(x, 2) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
            (pow(y, 2) > (pow(R, 2) - pow(x, 2)) && y <= b && y > 0 && x < R && x <= a))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;
    for (int i = 0; i < 10; i++)
    {
        x = 2 * max(max(a, b), R) * rand() / RAND_MAX - max(max(a, b), R);
        y = 2 * max(max(a, b), R) * rand() / RAND_MAX - max(max(a, b), R);

        if ((a > R && b < R) && (pow(y, 2) <= pow(R, 2) - pow(x, 2) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
            (pow(y, 2) > (pow(R, 2) - pow(x, 2)) && y <= b && y > 0 && x < R && x <= a))

            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}