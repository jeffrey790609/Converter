#include <iostream>

double celc_to_far(double celc)
{
    return 32.0 + (9.0/5.0 * celc);
}

double far_to_celc(double far)
{
    return 5.0/9.0 * (far - 32.0);
}

double kel_to_celc(double kel)
{
    return kel - 273.15;
}

double celc_to_kel(double celc)
{
    return celc + 273.15;
}

int main()
{

}
