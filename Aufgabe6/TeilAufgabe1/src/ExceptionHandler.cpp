#include "include/ExceptionHandler.hpp"
#include <iostream>

 void ExceptionHandler::throwException(int nr){
    try{
        if(nr > 10){
            throw 100;
        }
    }catch(int x){
         std::cout << "Input cannot be greater than 100!\nERROR CODE: " << x << std::endl;
    }
 }

void ExceptionHandler::throwException(double nr){
    try{
        if(nr > 10){
            throw 100;
        }
    }catch(int x){
       std::cout << "Input cannot be greater than 100!\nERROR CODE: " << x << std::endl;
    }
}