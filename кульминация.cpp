#include<iostream>
#include<string>
using namespace std;
#include "Голова.h"

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите строку текста" << endl;
    string txt;
    cin.ignore();
    getline(cin, txt);//вводить строку в консоли начиная с пробела! иначе результат некорректный
    
    cout << "Введите коэффициент кратности строки К" << endl;
    int K;
    cin >> K;   
    IsKPeriodic(K, txt);
	return 0;
}