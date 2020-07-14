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

 void ExceptionHandler::throwLOGException(int log){
     try{
         if(log <= 0){
             throw 200;
         }
     }catch(int x){
         std::cout << "Input cannot be 0 or less!!\nERROR CODE:" << x << std::endl;
     }
 }

 void ExceptionHandler::throwExceptionIndex(int in){
     try{
         if(0<=in && in <= 5){
            std::cout << "is in boundries!" << std::endl;
         }
         else{
             throw 300;
         }
     }catch( int x){
         std::cout << "INDEX NOT IN BOUNDS! Errorcode: " << x << std::endl; 
     }

 }