//
//  MI-20.cpp
//  
//
//  Created by Nicolas Gimenez on 14/6/17.
//
//

#include <iostream>

int main (){
    int a,b,i;
    std::cin>>a;
    for(i=1; i<10; ++i){
        std::cin>>b;
        if (b>a){
            a=b;
        }
    }
    std::cout<<"El mayor es "<<a<<"\n";
}
