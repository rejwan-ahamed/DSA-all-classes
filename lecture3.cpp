#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;

    cout << "enter a prime number: ";
    cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "It is not a prime number \n";
            count = count + 1;
            break;
        }
    }

    if (count == 0)
    {
        cout << "It's a prime number";
    }

    return 0;
}