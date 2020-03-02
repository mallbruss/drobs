// object.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Drob.h"
#include <string.h>
#include "Man.h"
using namespace std;
int Man::n = 0;
int main()
{
	/*Man m1;
	Man m2;
	cout << Man::n << endl;
	Man gr[5];
	cout << Man::n << endl;
	*/
	Drob d1(36, 24);
	
	cout << d1 << endl;
	Drob d2(1, 3);
	Drob sum;
	sum = d1+d2;
	cout <<"sum= "<< sum <<endl;
	cout << "d1 =  " << d1<<" d2= "<<d2 << endl;
	Drob raz = d1 - d2;
	cout << "raz= " << raz << endl;
	ifstream in("Text.txt");
	cin >> d1;
	cout << "\n after if " << d1 << endl;
	Drob wow(1, 3);
	Drob wow1(2, 7);
	Drob ogo = wow * wow1;
	cout << "ogo= " << ogo << endl;
	wow.setCh(1);
	wow1.setCh(2);
	wow.setZn(3);
	wow1.setZn(5);
	ogo = wow / wow1;
	cout << "ogo/= " << ogo << endl;
}
