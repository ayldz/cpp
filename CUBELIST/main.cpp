//Cubelist
//1den 10 a kadar olan sayıların küplerini listeler;
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numb;

    for(numb = 1; numb <= 10; numb++)
    {
        cout << setw(2) << numb;
        int cube = numb * numb * numb;
        cout << setw(5) << cube << endl;
    }

    return 0;
}

