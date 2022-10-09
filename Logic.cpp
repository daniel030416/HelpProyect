#include "Logic.h"

Logic::Logic(){}

void Logic::FillVect(){
    VecTrack[50];
    
    Vect1[10];
    Vect2[10];
    Vect3[10];
    Vect4[10];
    Vect5[10];

    
    int x = 0, contador = 0;
    for(int i = 0; i < 50; i++){ 
        int ConvIntStr = 0; 
        string res = "";

        if( i == 10 or i == 20 or i == 30 or i == 40){
            std::cout<<std::endl;
        }

        if(i < 10){
        ConvIntStr = Vect1[x]; 
        res = Conversion(ConvIntStr);
        VecTrack[i] = res;
        x++;
        contador++;

        }else if(i < 20){
        ConvIntStr = Vect2[x]; 
        res = Conversion(ConvIntStr);
        VecTrack[i] = res;
        x++;
        contador++;

        }else if(i < 30){
        ConvIntStr = Vect3[x]; 
        res = Conversion(ConvIntStr);
        VecTrack[i] = res;
        x++;
        contador++;

        }else if(i < 40){
        ConvIntStr = Vect4[x]; 
        res = Conversion(ConvIntStr);
        VecTrack[i] = res;
        x++;
        contador++;

        }else if(i < 50){
        ConvIntStr = Vect5[x]; 
        res = Conversion(ConvIntStr);
        VecTrack[i] = res;
        x++;
        contador++;

        }

        if(contador == 10){
            x = 0;
            contador = 0;
        }
        cout<<VecTrack[i]<<" ";
    }
}
string Logic::Conversion(int entero){
    string numeroCadena = "";
    std::stringstream ss;
    ss << entero;
    ss >> numeroCadena;
    return numeroCadena;
}

