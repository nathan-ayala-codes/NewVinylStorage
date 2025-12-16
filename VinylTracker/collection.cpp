#include "collection.h"

Collection::Collection()
{
    collectionName = "ERROR";
}

Collection::Collection(std::string name)
{
    collectionName = name;
}

void Collection::addVinyl()
{
    std::string vinylNameInput, artistInputName;
    double inputPrice;
    std::cout << "Enter in your Vinyl name:";
    std::getline(std::cin,vinylNameInput);
    std::cin.ignore();
    std::cout << "/nEnter in the Artist name:";
    std::getline(std::cin, artistInputName);
    std::cin.ignore();
    std::cout << "Enter in the vinyl price:";
    std::cin >> inputPrice;

    Vinyl temp(vinylNameInput, artistInputName, inputPrice);
    inventory->push_back(temp);
}

void Collection::removeVinyl()
{
    std::string target;
    std::cout << "What is the name of the Vinyl you want to remove?:";
    std::getline(std::cin, target);
    std::cin.ignore();
    std::cout << std::endl;
    for(int i = 0; i < inventory->size();i++)
    {
        if(inventory->at(i).getVinylName() == target)
        {
            inventory->erase(inventory->begin() + i);
            std::cout << target << " successfully removed!/n";
            return;
        }
    }
}

void Collection::displayCollection()
{
    for(int i = 0; i < inventory->size();i++)
    {
        std::cout << "Vinyl # " << i << ": " <<
        inventory->at(i).getVinylName() << "/n";
    }
}
