//QUESTION #2
#include "Fridge.h"
#include "ModelInfo.h"
#include "TV.h"
#include "Appliance.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    //(h)
    TV T1; 
    TV T2;

    //(i)
    Fridge F1(1002, "Black", "M2001", "Fridgidaire", 2, 24);
    Fridge F2(1003, "Black", "M2001", "Fridgidaire", 2, 24);
   // Fridge* F1 = new Fridge(1002, "Black", "M2001", "Fridgidaire", 2, 24);
   //Fridge* F2 = new Fridge(1003, "Black", "M2001", "Fridgidaire", 2, 24);

    //(j)
    T1 = (1001, "Grey", "LG41001", "Frigidaire", 32);

    //(K)
    int ID;
    string colour;
    string modelNo;
    string brand;
    int Size;

    cout << "Enter television ID:\n";
    cin >> ID;
    cout << "Enter television colour:\n";
    cin >> colour;
    cout << "Enter television model Number:\n";
    cin >> modelNo;
    cout << "Enter television brand:\n";
    cin >> brand;
    cout << "Enter television Size:\n";
    cin >> Size;

    T2.setSize(Size);
    T2.setInfo(ID, colour, modelNo, brand);

    //(L)

    ModelInfo mdl;



    //(m) 
    Appliance app1;

    //(n)
    
    //(o)


    //(p)

    //(q)


    
        



};