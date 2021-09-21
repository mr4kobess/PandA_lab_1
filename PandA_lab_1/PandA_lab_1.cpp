#include <iostream>
#include <cmath>

double first_addend(double x, double a, int c) {
    /*Функция возвращает занчение первого слагаемого*/

     /* Числитель */
    double numerator = sqrt(abs(-a * x + double(c)));

    /* Занменатель */
    double denumirator = log(abs(x + pow(double(c), 3)));

    return numerator / denumirator;
}

double second_addend(double x, double a, int c) {
    /*Функция возвращает занчение второго слагаемого.
      Возвращает корень 3-степени из суммы синуса 'a' и косинуса 'x' */

    double num = pow(sin(a) + cos(x), 1.0 / 3.0);

    return num;
}


int main() {
    using namespace std;
    /* Как я понял установка локального языка (взял со StackOverFlow) */
    setlocale(LC_ALL, "Russian");

    /* Init variabales */
    double a = 0.88;
    double x;
    int c;
    double y;

    /* Input variabales */
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите c: ";
    cin >> c;

    /* Evaluate value 'y' */
    y = first_addend(x, a, c) + second_addend(x, a, c);

    /* Printing 'y' */
    cout << "y = " << y << '\n';


    return 0;
}