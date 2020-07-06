#include "include/Vektor3d.hpp"
#include <iostream>

float x, y, z; 

Vektor3d::Vektor3d(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {}

void Vektor3d::getValue(){
    std::cout<<"x: "<< x <<" y: "<< y << " z: "<< z << std::endl;
}

const Vektor3d Vektor3d::operator+(const Vektor3d& other){
        
        Vektor3d vektor3d;
        vektor3d.x = this->x + other.x;
        vektor3d.y = this->y + other.y;
        vektor3d.z = this->z + other.z;
  
        return vektor3d;
}

const Vektor3d Vektor3d::operator-(const Vektor3d& other){
        
        Vektor3d vektor3d;
        vektor3d.x = this->x - other.x;
        vektor3d.y = this->y - other.y;
        vektor3d.z = this->z - other.z;
  
        return vektor3d;
}

const Vektor3d Vektor3d::operator*(const Vektor3d& other){
        
        Vektor3d vektor3d;
        vektor3d.x = this->x * other.x;
        vektor3d.y = this->y * other.y;
        vektor3d.z = this->z * other.z;
  
        return vektor3d;
}

const bool Vektor3d::operator==(const Vektor3d& v){
	if(this==&v)
	            return true;
			if(this->x!=v.x || this->y!=v.y || this->z!=v.z)
	            return false;
			if(this->x==v.x && this->y==v.y && this->z==v.z)
	            return true;
			return true;
}


const Vektor3d Vektor3d::operator++(){ //Präfix
    Vektor3d vektor3d;
    vektor3d.x = this->x+1;
    vektor3d.y = this->y+1;
    vektor3d.z = this->z+1;
    
    return vektor3d;
}

const Vektor3d Vektor3d::operator++(int d) { //Postfix
Vektor3d vektor3d = *this;
++*this;
return vektor3d;
}

const Vektor3d Vektor3d::operator/(const Vektor3d& other){
        
        Vektor3d vektor3d;
        vektor3d.x = this->x / other.x;
        vektor3d.y = this->y / other.y;
        vektor3d.z = this->z / other.z;
  
        return vektor3d;
}

std::ostream& operator<<(std::ostream& out, const Vektor3d& other){
    out << '(' << other.x << ',' << other.y << ',' << other.z <<')';
    return out;
}