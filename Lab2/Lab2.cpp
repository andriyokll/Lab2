#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "uk-UA");
	double radius, height;
	double volume, area;

	cout << "����i�� ���i�� ������ ���i����: ";
	cin >> radius;

	cout << "����i�� ������ ���i����: ";
	cin >> height;

	volume = M_PI * radius * radius * height;
	area = 2 * M_PI * radius * height;

	cout << "��'�� ���i����: " << volume << endl;
	cout << "����� ������ �������i ���i����: " << area << endl;

	return 0;
}
