#include <iostream>
#include "include/ExceptionHandler.hpp"
#include <cmath>

int main(){
    int nr;
    printf("Put in a number:\n");
    std::cin >> nr;
    double nrD = nr;

    ExceptionHandler except;
    except.throwException(nr);
    except.throwException(nrD);

    //if you execute this code, there will be a Floating point exception, and the core gets dumped!
    /*int divisonThroughZero = 5;
    std::cout << divisonThroughZero/0 << std::endl;
    */

    //todo logarithm Exceptionhandling machen!
    int logarithm = log(nr);
    std::cout << "Berechnung von logarithm: " << logarithm << std::endl;



    return 0;
}

