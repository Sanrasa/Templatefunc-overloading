#include "matematic.h"

Matematic::Matematic()
{

}

// Форматирование не ОК
// Даже если функция в одну строку следует её писать правильно и понятно
// type Class::func(args)
// {
//     body;
//     result ;
// }

int Matematic::sum (int z,int x) {return z + x;}
long Matematic::sum (long z, long x) {return z + x;}
double Matematic::sum (double z, double x) {return z + x;}

int Matematic::mult(int z, int x) {return z * x;}
long Matematic::mult(long z, long x) {return z * x;}
double Matematic::mult(double z, double x) {return z * x;}

int Matematic::sub(int z, int x) {return z - x;}
long Matematic::sub(long z,long x) {return z - x;}
double Matematic::sub(double z, double x) {return z - x;}
