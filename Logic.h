#include <iostream>
#include <time.h>
#include <sstream>
#include <stdio.h>

using std::string;

class Logic{
    public:
    Logic();
    int Vect1[10] = {41, 42 , 43, 44, 45, 46, 47, 48, 49, 50};
    int Vect2[10] = {40, 39 , 38, 37, 36, 35, 34, 33, 32, 31};
    int Vect3[10] = {21, 22 , 23, 24, 25, 26, 27, 28, 29, 30};
    int Vect4[10] = {20, 19 , 18, 17, 16, 15, 14, 13, 12, 11};
    int Vect5[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};
         
    string VecTrack[50];
    void FillVect();
    string Conversion(int entero);

};