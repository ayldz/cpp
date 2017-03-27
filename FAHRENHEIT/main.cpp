#include <iostream>

using namespace std;

int main()
{
    int ftemp; //fahrenheit cinsinden deger icin

    cout << "Enter temperature in fahrenheit : ";
    cin >> ftemp;

    int ctemp = (ftemp-32)* 5 / 9;

    cout << "Equivalent in Celcius is : " << ctemp << endl;

    return 0;
}

