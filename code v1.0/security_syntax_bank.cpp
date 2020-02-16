#include <iostream>
#include <conio.h>
#include <string>
//#include <ctime>
using namespace std;

/*int random(int min, int max)
{

    return rand() % min + max;
}

void lososo()
{   
    srand(static_cast<unsigned int>(time(NULL)));
    cout << "===" << random(1, 35);
}
*/
int main()
{
    /*int asys;
    do {
        cout << "Nacisnij klaiwsz by wylosowac liczbe od 1 do 35" << endl;
        lososo();
        cout << "wpisz 1 by zakonczyc, lub cokolwiek by powtorzyc" << endl;
        cin >> asys;
    } while (asys != 1);
    */
    static wstring password = L"anonymouse"; //wcin and wcout to show and get, wstring have 2B!!!
    static wstring pass1;                    //a1n2o3n4y5m6o7u8s9e
    static wstring pass2;
    static wstring pass3;
    cout << "WPROWADZ HASLO" << endl;
    cout << "X.X.X.X.X.";/*m*/wcin >> pass1; cout << ".X."; /*u*/wcin >> pass2; cout << "X"; /*e*/wcin >> pass3;
    static wstring check1(password, 5, 1);
    //static wstring check1 = L"m";
    static wstring check2(password, 7, 1);
    static wstring check3(password, 9, 1);
    if (pass1 == check1 && pass2 == check2 && pass3 == check3)
    {
        cout << "TO JESTES NAPRAWDE TY" << endl;
    }
    else {
        cout << "ZABRONIONE" << endl;
        //wcout << check2 << "," << check3 << endl;
    }
    _getch();

}
