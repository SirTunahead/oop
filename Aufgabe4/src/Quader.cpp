
#include "include/Quader.hpp"


    Quader::Quader(){

    }

    float Quader::getHoehe(){
        return *ptrH;
    }
    
    void Quader::setHoehe(float h){
        hoehe = h;
    }
     
    float Quader::volumen(){
        float volumen = getLaenge() * getBreite() * hoehe;
        return volumen;
    }