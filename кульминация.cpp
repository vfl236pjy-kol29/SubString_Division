#include<iostream>
#include<string>
using namespace std;
#include "������.h"

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "������� ������ ������" << endl;
    string txt;
    cin.ignore();
    getline(cin, txt);//������� ������ � ������� ������� � �������! ����� ��������� ������������
    
    cout << "������� ����������� ��������� ������ �" << endl;
    int K;
    cin >> K;   
    IsKPeriodic(K, txt);
	return 0;
}