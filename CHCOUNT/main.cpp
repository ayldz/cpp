//CHCOUNT.CPP
//Girilen metindeki karakter ve kelimeleri sayar

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int chcount = 0;                         //karakter sayisi (bosluk haric)
    int wdcount = 1;                         //kelime sayisi
    char ch = 'a';

    cout << "Enter a phrase: ";

    while(ch != '/r')                        //enter girilene kadar dön
    {
        ch = getch();                      //bir karakter oku

        if(ch == ' ')wdcount++;              //kelime sayisini artir
        else chcount++;                      //degilse, karakter sayisini artir
    }

    cout << "\nWords = "<< wdcount           //Sonuçları göster
         << "\nLetters = " <<chcount << endl;

    return 0;
}

