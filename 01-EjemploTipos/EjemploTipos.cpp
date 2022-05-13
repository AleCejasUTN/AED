#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std::literals;

int main()
{
    /* Tipos de datos */
    //Prueba de tipo de dato int
    assert(2==1+1);
    assert(4!=10);
    assert(255/255==1);
    assert(45*3>=45*3-1);
    assert(4%3!=0);
    assert(1-255<=-254);
    assert(7%5*2==4);
    
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
    assert(12.33/10.0>=1.23000);
    assert(1.0 >= 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    
    //Prueba de tipo de dato string
    assert("Ejemplo"s>="Ejemplo"s);
    assert("palabra"s=="pa"s+"labra"s);
    assert("palabra"s.length()==7);   //length("palabra")
    assert("palabra"s!="Palabra"s);
    assert("Hola"s<="hola"s);
    
    //Prueba de tipo de dato char
    assert('z'!='Z');
    assert('A'-10=='7');
    assert('n'==110);
    assert('A'+'B'==131);
    assert(3=='m'%'j');
    
    //Prueba de tipo de dato unsigned
    assert(20u==20);
    assert(100u/20u==5.0);
    assert(15u%3u!=5u);
    assert(20u/20u>=1u);
    assert(256u*16u<=5000u);
    assert((2u+2.0)*10==40u);
    std::cout << "Ok\n";
}