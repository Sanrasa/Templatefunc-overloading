#ifndef MATEMATIC_H
#define MATEMATIC_H

class Matematic
{
public:
    Matematic();

    template <typename unsig1, typename unsig2, typename unsig>
    unsig addition(unsig1 a, unsig2 b)
    {
        return a+b;
    }

    template <typename unsig1, typename unsig2, typename unsig>
    unsig subtraction(unsig1 a, unsig2 b)
    {
        return a-b;
    }

    template <typename unsig1, typename unsig2, typename unsig>
    unsig multiplication(unsig1 a, unsig2 b)
    {
        return a*b;
    }

    int sum (int z,int x); long sum (long z, long x); double sum (double z, double x);
    int mult (int z,int x); long mult (long z, long x); double mult (double z, double x);
    int sub (int z,int x); long sub (long z, long x); double sub (double z, double x);

};

#endif // MATEMATIC_H
