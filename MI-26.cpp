//
//  MI-26.cpp
//  
//
//  Created by Nicolas Gimenez on 14/6/17.
//
//

#include <iostream>

int main (){
    
    std::string ic,imax;
    double pc,pt,pmax,i;
    unsigned pa,cc1,cc2,cc3;
    
    for (i=0;i<10;++i){
        std::cin>>ic>>pc>>pa;
        pt=pt+pc;
        if (pc>pmax){
            pmax=pc;
            imax=ic;
        }
        switch (pa){
            case 1:
                cc1=cc1+1;
                break;
            case 2:
                cc2=cc2+1;
                break;
            default:
                cc3=cc3+1;
                break;
        }
    }
    
    std::cout<<"El peso total del buque es "<<pt<<"\n";
    std::cout<<"El contenedor con mayor peso es "<<imax<<"\n";
    std::cout<<"La cantidad de contenedores para el puerto 1 es "<<cc1<<"\n";
    std::cout<<"La cantidad de contenedores para el puerto 2 es "<<cc2<<"\n";
    std::cout<<"La cantidad de contenedores para el puerto 3 es "<<cc3<<"\n";
}

