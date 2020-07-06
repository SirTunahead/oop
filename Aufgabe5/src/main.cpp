#include <iostream>
#include "include/Maybe.hpp"
#include "include/Vektor3d.hpp"

template <typename type>
type add(type last)
    {
    return last;
    }

template<typename T, typename ... Args>
    T add(T first, Args ... args){
        try{
            T r = (first + add<T>(args ...));
            return r;
        } catch (char const* e){
            throw "This Object doesn't implement operator+";
        }
    }


int main(){

    Maybe<int> Test1;
    Maybe<int> Test2(2);
    Maybe<int> Test3(4);
    Maybe<double> Test4();
    Maybe<double> Test5(3.5);
    
    std::cout << Test1.empty() << std::endl;
    std::cout << Test2.empty() << std::endl;
    std::cout << Test2.theValue() << std::endl;
    //std::cout << Test1.theValue() << std::endl;
    
    std::cout << Test1.toString() << std::endl;
    std::cout << Test2.toString() << std::endl;
    
    Test1 = Test2 + Test3;
    std::cout << Test1.theValue() << std::endl;
    Test1 = Test1/Test2;
    std::cout << Test1.theValue() << std::endl;

    std::cout << add(2.5,3,4) << std::endl;

 	std::string string1,string2,string3;
 	string1 = "string1";
 	string2 = "string2";
 	string3 = "string3";

 	std::cout << add(string1,string2,string3) << std::endl;

 	Vektor3d v1 (1,2,3);
 	Vektor3d v2 (3,2,1);
 	Vektor3d v3 (4,2,4);

 	std::cout << add( v1, v2, v3) << std::endl;

    return 0;
}