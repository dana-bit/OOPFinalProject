#ifndef TV_H
#define TV_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "ModelInfo.h"
#include "Appliance.h"

class TV : public Appliance
{
    int Size;

public://default
    TV()
    {
        Size = 0;
    }

    //primary
    TV(int Size)
    {
        this->Size = Size;
    }

        int getSize()
        {
            return Size;
        }

        void setSize(int Size)
        {
            this->Size = Size;
        }


    TV(int ID, string colour, string modelNo, string brand, int Size)
    {
        setInfo(ID, colour, modelNo, brand);
        this->Size = Size;

    }

    TV(int ID, int Size, ModelInfo model)
    {
        this->Size = Size;
        Appliance(ID, model);

       
    }



    void ShowTV()
    {
        cout << "Appliance ID :" << "/t" << ID << endl;
        cout << "Colour :" << "/t" << getcolour() << endl;
        cout << "Brand : " << "/t" << getbrand() << endl;
        cout << "Model Number : " << "/t" << getmodelNo() << endl;
        cout << "Size : " << "/t" << Size << endl;
    }

    void work()
    {
        cout << "Play Program" << endl;
    }

    void writeTV()
    {
        try
        {
            ofstream Appliance("Appliance.txt", ios::app);
            if (Appliance.fail())
            {
                throw runtime_error("ERROR CREATING FILE!");
            }
          Appliance << "Appliance ID" << "\t" << "Colour" << "\t" << "Brand" << "\t" << "Model Number" << "/t" << "Size" << endl;
          Appliance << ID << "\t" << getcolour() << "\t" << getbrand() << "\t" << getmodelNo() << "/t" << Size << endl;
            Appliance.close;

        }
        catch (runtime_error& err)
        {
            cerr << err.what() << endl;
        }
    }

    void readTV()
    {
        int temp_ID;
        string temp_colour;
        string temp_brand;
        string temp_modelNo;
        int temp_Size;
        
        ifstream Appliance;
        Appliance.open("Appliance.txt");
        if (Appliance.is_open())
        {

            while (!Appliance.eof())
            {
                Appliance >> temp_ID >> temp_colour >> temp_brand >> temp_modelNo >> temp_Size;
                cout << "Appliance ID: " << temp_ID << endl;
                cout << "Colour : " << temp_colour << endl;
                cout << "Brand : " << temp_brand << endl;
                cout << "Model Number :" << temp_modelNo << endl;
                cout << "Size : " << temp_Size << endl;
                system("pause");
            }
        }
        Appliance.close();
    }

    void findTV(int Key)
    {
        int temp_ID;
        string temp_colour;
        string temp_brand;
        string temp_modelNo;
        int temp_Size;

        ifstream Appliance;
        Appliance.open("Appliance.txt");

        while (Appliance >> temp_ID >> temp_colour >> temp_brand >> temp_modelNo >> temp_Size)
        {
            if (Key == temp_ID) {
                cout << "Appliance ID: " << temp_ID << endl;
                cout << "Colour : " << temp_colour << endl;
                cout << "Brand : " << temp_brand << endl;
                cout << "Model Number :" << temp_modelNo << endl;
                cout << "Size : " << temp_Size << endl;
            }
        }

    }


};
#endif //TV.H

