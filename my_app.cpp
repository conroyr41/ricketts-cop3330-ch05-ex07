#include <iostream>
#include "my_app.h"

using namespace std;

int main()
{
    char operation;
    double a, b, c;

    cout << "\nEnter the value for \"a\"!\n";

    cin >> a;

    cout << "\nEnter the value for \"b\"!\n";

    cin >> b;

    cout << "\nEnter the value for \"c\"!\n";

    cin >> c;

    compute(a, b, c);

    return 0;
}