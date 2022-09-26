#include <iostream>
#include "matematic.h"

using namespace std;

int main()
{
    Matematic test;
    int x = 10;
    int y = 5;
    long z = 214748364;
    long zz = 31289073;
    double c = 0.11231;
    double cc = 0.00123;
    int sum1 = test.multiplication<int,int,int>(x, y);
    int sum2 = test.mult(x, y);
    long sum3 = test.sub (zz, z);
    double sum4 = test.sum(c, cc);
    cout << endl << "Шаблонное сложение + перегрузки: " << sum1 << " " << sum2 << " " << sum3 << " " << sum4 << endl;
}
