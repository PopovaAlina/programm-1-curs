#include <iostream>

using namespace std; // используем именное пространство

void center(const char* s, int wLine)
{
	int w = strlen(s);
	int delta = (wLine - w) / 2;
	cout << left;
	cout.width(delta); cout << " ";
	cout << s;
	cout.width(delta); cout << " ";
}

int main()
{
	setlocale(LC_ALL, "RUS");
	char f1[20], f2[20], f3[20];
	char i1[5], i2[5], i3[5];
	char g1[6], g2[6], g3[6];
	char o1[7], o2[7], o3[7];
	char d1[11], d2[11], d3[11];

	cout << "Введите Фамилии" << "\n";
	cin.getline(f1, 20);
	cin.clear();

	cin.getline(f2, 20);
	cin.clear();

	cin.getline(f3, 20);
	cin.clear();

	cout << "Введите инициалы" << "\n";
	cin.getline(i1, 5);
	cin.clear();

	cin.getline(i2, 5);
	cin.clear();

	cin.getline(i3, 5);
	cin.clear();

	cout << "Введите год рождения" << "\n";
	cin.getline(g1, 6);
	cin.clear();

	cin.getline(g2, 6);
	cin.clear();

	cin.getline(g3, 6);
	cin.clear();

	cout << "Введите оклад " << "\n";
	cin.getline(o1, 7);
	cin.clear();
	cin.getline(o2, 7);
	cin.clear();
	cin.getline(o3, 7);
	cin.clear();

	cout << "Введите дату приема на работу" << "\n";
	cin.getline(d1, 11);
	cin.clear();

	cin.getline(d2, 11);
	cin.clear();

	cin.getline(d3, 11);
	cin.clear();

	cout.width(79); cout.fill('_'); cout << "_" << endl;
	cout.width(78); cout.fill(' '); cout << left << "|Отдел кадров "; cout << "|" << endl;

	cout << "|"; cout.width(77); cout.fill('_'); cout << "_"; cout << "|" << endl;

	cout.fill(' ');
	cout << left << "|"; center("Фамилия", 14);
	cout << left << "|"; center("Инициалы", 13);
	cout << left << "|"; center("Год рожд", 13);
	cout << left << "|"; center("Оклад", 14);
	cout << left << "|"; center("Дата приема на работу", 20);
	cout << left << "|" << endl;

	cout << "|"; cout.width(77); cout.fill('_'); cout << "_"; cout << "|" << endl;

	cout.fill(' '); 
	cout << left << "|"; cout.width(13); cout << left << f1;
	cout << left << "|"; cout.width(12); cout << left << i1; 
	cout << left << "|"; cout.width(12); cout << left << g1;
	cout << left << "|"; cout.width(13); cout << left << o1;
	cout << left << "|"; cout.width(23); cout << left << d1; cout << "|" << endl;

	cout << "|"; cout.width(77); cout.fill('_'); cout << "_"; cout << "|" << endl;

	cout.fill(' ');
	cout << left << "|"; cout.width(13); cout << left << f2;
	cout << left << "|"; cout.width(12); cout << left << i2;
	cout << left << "|"; cout.width(12); cout << left << g2;
	cout << left << "|"; cout.width(13); cout << left << o2;
	cout << left << "|"; cout.width(23); cout << left << d2; cout << "|" << endl;

	cout << "|"; cout.width(77); cout.fill('_'); cout << "_"; cout << "|" << endl;

	cout.fill(' ');
	cout << left << "|"; cout.width(13); cout << left << f3;
	cout << left << "|"; cout.width(12); cout << left << i3;
	cout << left << "|"; cout.width(12); cout << left << g3;
	cout << left << "|"; cout.width(13); cout << left << o3;
	cout << left << "|"; cout.width(23); cout << left << d3; cout << "|" << endl;

	cout << "|"; cout.width(77); cout.fill('_'); cout << "_"; cout << "|" << endl;

	cout.width(78); cout.fill(' '); cout << left << "|Примечание: оклад установлен по состоянию на 1 января 2000 года"; cout << "|" << endl;
	cout << "|"; cout.width(77); cout.fill('_'); cout << "_"; cout << "|" << endl;
}