// ConsoleApplication31part2number4from19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;


#include <iostream>
#include <time.h>
#include <windows.h>


int main(){
int a, b,number;
	int round = 3, roundcount = 1;
	int summa = 0, points = 0, pointscomp = 0;
	int choice, rnd, life, points;
	bool result = false;

	srand(time(NULL));

	cout << "u haave 3 times\n";

	while (roundcount <= 3) {

		cout << "its 1 level \n" << roundcount;
		result = false;
		roundcount++;
		a = 1;
		b = 10;
		round = a + rand() % (b - a);
		cout << rnd << "number";
		life = (b - a + 1) / 2;
		pointscomp = life * 5;
		while (result != true) {
			cout << "your life\n";
			cout << life;
			cout << "put your number\n";
			cin >> number;
			if (number == rnd) {
				cout << "win\n";
				result = true;
				points = life * 5;
				cout << "u got\n" << points;
			}
			else {
				cout << "u lost 1 life\n";
				life--;
				cout << life;
				do {
					cout << "help???1 yes 0 no\n";
					cin >> choice;
					if (choice == 1) {
						if (number > rnd) {
							cout << "less\n";
							life--;
						}
						else {
							cout << "more\n";
							life--;
						}
					}
				} while ((choice != 1) && (choice != 0));
				if (life <= 0) {
					cout << "u lost game\n";
					cout << "point\n" << pointscomp;
				}
				else {}
			}
		}
	}
	summa += points;
	cout << "summa  " << summa;
}
cout << "play next leevel??d or c\n";
int choice2;
cin >> choice2;
if(choice2==d){
	cout << "welcome 2 level choice number 10-100\n" << endl;
	roundcount = 1;
	while (roundcount <= 2) {
		cout << roundcount;
		result = false;
		roundcount++;
		a = 10;
		b = 100;
		rnd = a + rand() % (b - a);
		cout << rnd << "number \n";
		life = (b - a + 1) / 2;
		pointscomp = life * 10;
		while (result != true) {
			cout << "life is..." << life;
			cout < "u number\n";
			cin >> number;
			if (number == rnd) {
				cout << "u win\n";
				result = true;
				points = life * 10;
				cout << " your points ..." << points;
			}
			else {
				cout << "-1 life\n";
				life--;
				cout << life;
				do {
					cout << "help??1or 0\n";
					cin >> > choice;
					if (choice == 1) {
						if(number>rnd) {
							cout << "less\n";
							life--;


						}
						else {
							cout"more\n";
							life--
						}
					}

				}
				while((choice!=1)&&(choice!=0))
					if (lie <= 0) {
						cout << "u lost \n";
						cout << "comp.." << pointscomp;
					}
					else {

					}
			}
		}
		summa += points;
		cout << "total" << summa << "\n";
	}


}
else {
	choice2 == c;
	cout << "bye";
}
return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
