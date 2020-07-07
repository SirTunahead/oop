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

    std::cout << "An der Stelle 1 ist: " << test[1] << std::endl; 

    copyTest.erase(1);
    std::cout << "An der Stelle 1 ist: \n" << copyTest[1] << std::endl;

    printf("Iterator for test\n");
    for(auto i = test.begin(); i != test.end(); i++ ){
        std::cout << i->first << ": "  << i->second << std::endl;
    }
    printf("\n");
    printf("Iterator for copyTest\n");
     for(auto i = copyTest.begin(); i != copyTest.end(); i++ ){
        std::cout << i->first << ": "  << i->second << std::endl;
    }      
    return 0;
}