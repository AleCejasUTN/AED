#include <cassert>
//#include <iostream>
#include <iomanip>
using namespace std::literals;

int main()
{
    //Prueba de tipo de dato int
    assert(2==1+1);
    assert(4==8/2/2);
    //Prueba de tipo de dato bool
    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert((false or true) and false==false);
    //Pruebas de tipo de dato double
    assert(2.0==1.0+1.0);
    assert(0.1==1.0/10.0);
    assert(1==1.0);
    assert(2.0==1+1.0);
    assert(2==1+1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';
    //Prueba de tipo de dato string
    assert("pacheco"s=="pa"s+"checo"s);
    assert("pacheco"s.length()==7); //length("pacheco")
}