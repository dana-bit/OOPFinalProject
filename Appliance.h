#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <iostream>
#include <string>
#include "ModelInfo.h"


using namespace std;

class Appliance
{
protected:

    int ID;
    ModelInfo model;

public:

    //Default
    Appliance()
    {
        ID = 0;
        model = ModelInfo();
    }

    //Primary 1
    Appliance(int ID, ModelInfo model)
    {
        this->ID = ID;
        this->model = model;
    }

    //Primary 2
    Appliance(int ID, string colour, string modelNo, string brand)
    {
        this->colour = colour;
        this->modelNo = modelNo;
        this->brand = brand;
    }

    //Copy
    Appliance(Appliance& obj)
    {
        this->ID = obj.ID;
        // this->model = obj.model;
        this->getcolour = obj.getcolour;
        this->getmodelNo = obj.getmodelNo;  
        this->getbrand = obj.getbrand;
    }

    //Accessors & Mutators
    int getID()
    {
        return ID;  
    }

    string getcolour()
    {
        return getcolour();
    }

    string getmodelNo()
    {
        return getmodelNo();
    }

    string getbrand()
    {
        return getbrand();
    }


    void setInfo(int ID, string colour, string modelNo, string brand)
    {
        this->setInfo(ID, colour, modelNo, brand);

    }


    void updateModel(string colour, string modelNo, string brand)
    {

        this->updateModel(colour, modelNo, brand);
    }

    void updateID(int ID)
    {
        this->updateID(ID);
    }

    void displayApp()
    {
        cout << "Appliance ID :" << "/t" << ID << endl;
        cout << "Colour :" << "/t" << getcolour() << endl;
        cout << "Brand : " << "/t" << getbrand() << endl;
        cout << "Model Number : " << "/t" << getmodelNo() << endl;
    }

    //Abstract FUNCTION
    void work()
    {

    }

};

#endif // APPLIANCE_