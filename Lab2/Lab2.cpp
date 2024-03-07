#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "uk-UA");
	double radius, height;
	double volume, area;

	cout << "Введiть радiус основи цилiндра: ";
	cin >> radius;

	cout << "Введiть висоту цилiндра: ";
	cin >> height;

	volume = M_PI * radius * radius * height;
	area = 2 * M_PI * radius * height;

	cout << "Об'єм цилiндра: " << volume << endl;
	cout << "Площа бокової поверхнi цилiндра: " << area << endl;

	return 0;
}
