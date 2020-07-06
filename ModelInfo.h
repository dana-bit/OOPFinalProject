#ifndef MODELINFO_H
#define MODELINFO_H
#include <iostream>
#include <string>

using namespace std;

class ModelInfo
{
private:
    string colour;
    string modelNo;
    string brand;

public:
    //DEFAULT
    ModelInfo()
    {
        colour = "";
        modelNo = "";
        brand = "";
    }

    //PRIMARY
    ModelInfo(string colour, string modelNo, string brand)
    {
        this->colour = colour;
        this->modelNo = modelNo;
        this->brand = brand;
    }

    //COPY
    ModelInfo(ModelInfo& obj)
    {
        this->colour = obj.colour;
        this->modelNo = obj.modelNo;
        this->brand = obj.brand;
    }

    //Accessors & Mutators
    string getcolour()
    {
        return colour;
    }

    void setcolour(string colour)
    {
        this->colour;
    }

    string getmodelNo()
    {
        return modelNo;
    }

    void setmodelNo(string modelNo)
    {
        this->modelNo;
    }

    string getbrand()
    {
        return brand;
    }

    void setbrand(string brand)
    {
        this->brand;
    }


};

#endif // MODELINFO_H

