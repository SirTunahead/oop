#include <iostream>
#include <map>

int main(){
    std::map <int, char> test;


    if(test.empty() == true){
        printf("map is empty!\n");
        
    }
    else{
       printf("map is NOT empty!\n");
    }

    test.insert(std::pair<int, char>(2, 'A'));
    test.insert(std::pair<int, char>(1, 'M'));
    test.insert(std::pair<int, char>(3, 'P'));

    std::map <int, char> copyTest;
    copyTest = test;

    if(copyTest.empty() == true){
        printf("copy_of_map is empty!\n");
        
    }
    else{
       printf("copy_of_map is NOT empty!\n");
    }

    return 0;
}