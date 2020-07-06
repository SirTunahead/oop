#include "include/Filemanager.hpp"

Filemanager::Filemanager(){

}

void Filemanager::write(){

    std::ofstream myFile;
    myFile.open("myFile/lists.txt");
    
    if(myFile.is_open()){
        myFile << "Hello, File!";
    }
    else{
        std::cout << "Didn't work!" << std::endl;

    }
    myFile.close();

}