#ifndef FRIDGE_H
#define FRIDGE_H
#include <iostream>
#include <string>
#include "ModelInfo.h"
#include "Appliance.h"

using namespace std;

class Fridge : public Appliance
{
private:
    int Size;
    int Doors;
public:
    //DEFAULT
    Fridge()
    {
        Size = 0;
        Doors = 0;
    }

    //PRIMARY
    Fridge(int Size, int Doors)
    {
        this->Size = Size;
        this->Doors = Doors;
    }

    Fridge(int ID, string colour, string modelNo, string brand, int Doors, int Size)
    {
        setInfo(ID, colour, modelNo, brand);
        this->Size = Size;
        this->Doors = Doors;
       

    }

    //GETTERS AND SETTER
    int getsize()
    {
        return Size;
    }

    void setsize(int Size)
    {
        this->Size = Size;
    }

    int getDoors()
    {
        return Doors;
    }

    void setDoors(int Doors)
    {
        this->Doors = Doors;
    }

    void ShowFridge()
    {
        cout << "Appliance ID :" << "/t" << ID << endl;
        cout << "Colour :" << "/t" << getcolour() << endl;
        cout << "Brand : " << "/t" << getbrand() << endl;
        cout << "Model Number : " << "/t" << getmodelNo() << endl;
        cout << "Size : " << "/t" << Size << endl;
        cout << "Doors : " << "/t" << Doors << endl;
    }

    void work()
    {
        cout << "Maintaining optimal cooling temperature" << endl;
    }


};

#endif // FRIDGE_H
