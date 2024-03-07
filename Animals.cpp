#include "pch.h"

using namespace System;

ref class Animal
{
public:
    int legs;
    void SetName(String^ nm) 
    {
        name = nm;
    }
    String^ GetName()
    {
        return name;
    }
private:
    String^ name;
};

int main(array<System::String ^> ^args)
{
    Animal cat, dog;
    cat.SetName("Cat");
    cat.legs = 4;
    dog.SetName("Dog");
    dog.legs = 4;
    Console::WriteLine("Animal 1");
    Console::WriteLine("Name: ");
    Console::WriteLine(cat.GetName());
    Console::WriteLine("Legs:  ");
    Console::WriteLine(cat.legs);
    Console::WriteLine();
    Console::WriteLine("Animal 2");
    Console::WriteLine("Name: ");
    Console::WriteLine(dog.GetName());
    Console::WriteLine("Legs:  ");
    Console::WriteLine(dog.legs);
    Console::WriteLine();

    
    return 0;
}
