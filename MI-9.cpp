//
//  MI-9.cpp
//  
//
//  Created by Nicolas Gimenez on 4/6/17.
//
//

#include <iostream>

int main (){
    unsigned m;
    int a;
    
    std::cin >> m;
    std::cin >> a;
    
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            std::cout<< "El mes " << m << " tiene 31 dias" << "\n";            break;
        case 4: case 6: case 9: case 11:
            std::cout<< "El mes "<< m << "tiene 30 dias" << "\n";
            break;
        case 2: if ((a%4==0 and a%100!=0) or a%400==0) {
            std::cout<< " El mes "<< m << " tiene 29 dias" << "\n";
        }
            else {
            std::cout<< " El mes "<< m << " tiene 28 dias" << "\n";
            }
        default:
            return 0;
    }
}
