#include <iostream>
#include "include/Vektor3d.hpp"

int main(){

Vektor3d v1(1,2,3);
Vektor3d v2(3,2,1);
Vektor3d v3 = v1+v2;
Vektor3d v4 = v3-v1;
Vektor3d v5 = v3*v3;
Vektor3d v6 = v1+v2*v3;
Vektor3d v7(1,1,1);
v7 = v7++;
Vektor3d v8 = v2/v1;



std::cout << "Vector 1: "<<v1<<std::endl;
std::cout << "Vector 2: "<<v2<<std::endl;
std::cout << "Vector 3: "<<v3<<std::endl;
std::cout << "Vector 4: "<<v4<<std::endl;
std::cout << "Vector 5: "<<v5<<std::endl;
std::cout << "Vector 6: "<<v6<<std::endl;
std::cout << "Vector 7: "<<v7<<std::endl;
std::cout << "Vector 8: "<<v8<<std::endl;


return 0;
}