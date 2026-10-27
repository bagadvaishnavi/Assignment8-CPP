#include <iostream>
using namespace std;

int main()
{
    int a, b, age;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter your age: ";
    cin >> age;


    // 1. EXCEPTION HANDLING FOR DIVISION
    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed";
        }

        cout << "Result = " << (float)a / b << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }


    // 2. EXCEPTION HANDLING FOR AGE
    try
    {
        if (age > 100)
        {
            throw "Age is not valid";
        }

        if (age < 18)
        {
            throw age;
        }

        cout << "Age " << age << " is eligible" << endl;
    }
    catch (int x)
    {
        cout << "Error: age " << x
             << " is less than 18, not eligible" << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }


    // 3. CATCH-ALL EXCEPTION HANDLING
    try
    {
        throw 1.5;
    }
    catch (...)
    {
        cout << "Some unknown exception caught" << endl;
    }


    cout << "Program ended normally" << endl;

    return 0;
}
