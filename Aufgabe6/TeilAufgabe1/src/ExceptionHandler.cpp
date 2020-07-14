#include "include/ExceptionHandler.hpp"
#include <iostream>
#include <vector>

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

 void ExceptionHandler::throwExceptionVector(){
     
     try{
        std::vector<int> myvector;
        myvector.resize(myvector.max_size() + 1);
        
     }catch(const std::length_error& e){
         std::cout << "legnth Error!" << e.what() << std::endl; 
     }
 }