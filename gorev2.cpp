#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;
    string writtenForm;

    cout << "[1-999] arasında bir sayı girin: ";
    cin >> number;

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    switch (hundreds)
    {
        case 1:
            writtenForm += "yüz";
            break;
        case 2:
            writtenForm += "ikiyüz";
            break;
        case 3:
            writtenForm += "üçyüz";
            break;
        case 4:
            writtenForm += "dörtyüz";
            break;
        case 5:
            writtenForm += "beşyüz";
            break;
        case 6:
            writtenForm += "altıyüz";
            break;
        case 7:
            writtenForm += "yediyüz";
            break;
        case 8:
            writtenForm += "sekizyüz";
            break;
        case 9:
            writtenForm += "dokuzyüz";
            break;
    }

    switch (tens)
    {
        case 1:
            writtenForm += "on";
            break;
        case 2:
            writtenForm += "yirmi";
            break;
        case 3:
            writtenForm += "otuz";
            break;
        case 4:
            writtenForm += "kırk";
            break;
        case 5:
            writtenForm += "elli";
            break;
        case 6:
            writtenForm += "altmış";
            break;
        case 7:
            writtenForm += "yetmiş";
            break;
        case 8:
            writtenForm += "seksen";
            break;
        case 9:
            writtenForm += "doksan";
            break;
    }

    switch (ones)
    {
        case 1:
            writtenForm += "bir";
            break;
        case 2:
            writtenForm += "iki";
            break;
        case 3:
            writtenForm += "üç";
            break;
        case 4:
            writtenForm += "dört";
            break;
        case 5:
            writtenForm += "beş";
            break;
        case 6:
            writtenForm += "altı";
            break;
        case 7:
            writtenForm += "yedi";
            break;
        case 8:
            writtenForm += "sekiz";
            break;
        case 9:
            writtenForm += "dokuz";
            break;
    }

    cout << "Girdiginiz sayinin yazili formu: " << writtenForm << endl;

    return 0;
}
