//PHONE.CPP
//Girilen telefon numarasını yapı halinde yutar
#include <iostream>
using namespace std;

struct Phone
{
    int areaCode;
    int exchange;
    int number;
};

int main()
{
    Phone number1 = { 212, 767, 8900};
    Phone number2;

    cout << "Enter Your area code, exchange, and number : ";
    cin >> number2.areaCode >> number2.exchange >> number2.number;

    cout << "My number is (" << number1.areaCode << ")"
         << number1.exchange << "-" << number1.number << endl;

    cout << "Your number is (" << number2.areaCode << ")"
         << number2.exchange << "-" << number2.number << endl;

    return 0;
}

