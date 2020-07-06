#include "include/Rechteck.hpp"

float laenge, breite;

Rechteck::Rechteck(){

}

 float Rechteck::getLaenge(){
    return *ptrL;
}

 float Rechteck::getBreite(){
    return *ptrB;
}

void Rechteck::setLaenge(float l){
    laenge = l;
}

void Rechteck::setBreite(float b){
    breite = b;
}

float Rechteck::umfang(){
    float umfang = laenge+laenge+breite+breite;
    return umfang;
}

float Rechteck::rFlaeche(){
    float rflaeche = laenge*breite;
    return rflaeche;
}