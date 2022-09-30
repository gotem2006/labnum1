#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите номер задания :";
	int a;
	cin >> a;
	if (a == 1)
	{
		cout << "Вы выбрали задание №1\n";
		cout << "А мы?\nНе так же ль мы\nСошлись на краткий миг для переклички ? " << endl;
		return main();
	}

	else if (a == 2)
	{
		cout << "Введите значение температуры по градусам цельсия:";
		int temp1;
		cin >> temp1;
		float result1;
		float b;
		b = 9;
		float c;
		c = 5;
		result1 = (temp1 * (b / c)) + 32;
		cout << "Знaчение температуры по градусам форенгейта:" << result1 << "\n";
		return main();
	}
	else if (a == 3)
	{
		int sum, f, g, m, d, sum2, nod; 
		char s;
		cout << "Введите значение первой дроби:";
		cin >> f >> s >> g;
		cout << "Введите значение второй дроби:";
		cin >> m >> s >> d;
		sum = ((f * d) + (g * m));
		sum2 = (g * d);
		if (sum < sum2)
		{
			for (int i = 1; i < sum2; i++)
			{
				if ((sum % i == 0) & (sum2 % i == 0))
				{
					nod = i;
				}
			}
		}
		else
		{
			for (int i = 1; i < sum; i++)
			{
				if ((sum % i == 0) & (sum2 % i == 0))
				{
					nod = i;
				}
			}
		}
		if (sum % sum2 == 0)
		{
			cout << "Сумма равна:" << sum / nod << "\n";
		}
		else
		{
			cout << "Сумма равна:" << sum / nod   << '/' << sum2 / nod << "\n";
		}
		

		return main();


	}
	else if (a == 4)
	{
		cout << "Введите количество фунтов:";
		float funt;
		cin >> funt;
		cout << "Введите количество шиллингов:";
		float shili;
		cin >> shili;
		cout << "Введите количество пенсов";
		float pens;
		cin >> pens;
		float decfunt;
		decfunt = funt + ((shili / 20) + (pens / 240));

		cout << "Десятичных футов:" << decfunt << endl;
		return main();
	}
	else if (a == 5)
	{
		cout << "Введите число десятичных футов:";
		float decfunt2, funt2, shili2, pens2, dec;
		cin >> decfunt2;
		funt2 = int(decfunt2);
		dec = decfunt2 - funt2;
		shili2 = dec * 20;
		shili2 = int(shili2);
		pens2 = (dec * 20 - shili2) * 12;
		pens2 = int(pens2);
		cout << "Эквивалентная сумма в старой форме записи" << funt2 << '.' << shili2 << '.' << pens2 << "\n";
		return main();
	}
	else
	{
		cout << "Невернный номер задания!\n";
		return main();

	}




}
