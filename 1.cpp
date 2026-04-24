#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Задача (Вариант 19)\n";
    cout << "Найти ускорения движения клина и бруска.\n\n";

    // Дано
    double M = 25.52; // Масса клина
    double m = 5.7; // Масса бруска
    double k = 0.15; // Коф трения
    double g = 9.8; // Свободное падение
    double alpha_deg = 40; // Угол

    cout << "Дано:\n";
    cout << "M = " << M << " кг\n"; // Масса клина
    cout << "m = " << m << " кг\n"; // Масса бруска
    cout << "k = " << k << endl; // Коф трения
    cout << "alpha = " << alpha_deg << " градусов\n"; // Угол
    cout << "g = " << g << " м/с^2\n\n";

    // получаем угол
    double alpha = alpha_deg * M_PI / 180.0;

    // расчет A
    double A = M + m * (sin(alpha) * sin(alpha) - k * sin(2 * alpha) / 2);

    // ускорения
    double a1 = (g * M / A) * cos(alpha) * (sin(alpha) - k * cos(alpha));
    double a2 = (g * M / A) * sin(alpha) * (cos(alpha) + k * sin(alpha));

    // обрезаем до 6 знаков, чтобы было как в ожидаемом ответе, иначе округляет
    a1 = floor(a1 * 1000000) / 1000000;
    a2 = floor(a2 * 1000000) / 1000000;

    cout << "-----------------------------\n";
    cout << "Ответ:\n";

    cout << fixed << setprecision(6);

    cout << "a1 (ускорение клина) = " << a1 << "\n";
    cout << "a2 (ускорение бруска) = " << a2 << "\n";
    cout << "A  = " << A << "\n";

    return 0;
}