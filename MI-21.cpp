//
//  MI-21.cpp
//  
//
//  Created by Nicolas Gimenez on 14/6/17.
//
//

#include <iostream>
int main (){
    int a,b,i,maximo,minimo,posmax,posmin;
    std::cin>>a;
    maximo=a;
    minimo=a;
    posmax=1;
    posmin=1;
    for (i=1;i<10;++i){
        std::cin>>b;
        if(b>maximo){
            maximo=b;
            posmax=i+1;
        }
        if(b<minimo){
            minimo=b;
            posmin=i+1;
        }
    }
    std::cout<<"El valor maximo es "<<maximo<<" su posicion fue la numero "<<posmax<<"\n";
    std::cout<<"El valor minimo es "<<minimo<<" su posicion fue la numero "<<posmin<<"\n";
}
