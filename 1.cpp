
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    const double g = 9.81;
    const double Pi = 3.1416;
    double H = 1;
    double L = 1;
    cout << "input lift height (H) and flight range (L) " << endl;
    do
    {
        cout << "INPUT H: ";
        cin >> H;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "incorrect value\n";
        }
    } while (H <= 0);

    do
    {
        cout << "INPUT L: ";
        cin >> L;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "incorrect value\n";
        }
    } while (L <= 0);
    double V, alpha;
    alpha = atan(4 * H / L) * 180 / Pi;
    V = sqrt(((g * ((L * L) + (16 * H * H)) / (8 * H))));

    cout << "starting speed=" << V << endl;
    cout << "alpha, under which the body is thrown towards the horizon=" << alpha;
}
