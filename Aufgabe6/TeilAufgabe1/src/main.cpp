#include <iostream>
#include "include/ExceptionHandler.hpp"
#include <cmath>
#include <vector>

void index0bis5(int index){
    try{
        if(index > 5){
            throw 300;
        }
    }catch (int x){
        std::cout << "index out of range!" << std::endl;
    }
}

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

    printf("Put in a number for log:\n");
    std::cin >> nr;

    except.throwLOGException(nr);
    int logarithm = log(nr);
    std::cout << "Berechnung von logarithm: " << logarithm << std::endl;


    except.throwExceptionIndex(10);
    return 0;
}

