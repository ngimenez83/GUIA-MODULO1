//
//  MI-4.cpp
//  
//
//  Created by Nicolas Gimenez on 4/6/17.
//
//

#include <iostream>

int main (){
    int a;
    double quintaparte, resto, septimaparte;
    
    std::cin>>a;
    
    quintaparte=a/5;
    resto=a%5;
    septimaparte=quintaparte/7;
    
    std::cout<<quintaparte<<"\n"<<resto<<"\n"<<septimaparte<<"\n";
    
}
