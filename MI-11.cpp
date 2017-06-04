//
//  MI-11.cpp
//  
//
//  Created by Nicolas Gimenez on 4/6/17.
//
//

#include <iostream>

int main (){
    int e;
    std::cin>>e;
    
    switch (e){
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
            std::cout<< "MENOR" << "\n";
            break;
        case 13: case 14: case 15: case 16: case 17: case 18:
            std::cout<< "CADETE" << "\n";
            break;
        case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26:
            std::cout<< "JUVENIL" << "\n";
            break;
        default:
            std::cout<< "MAYOR" << "\n";
        
    }
}
