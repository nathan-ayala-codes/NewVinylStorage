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
    std::cout << "Enter in the Artist name:";
    std::getline(std::cin, artistInputName);
    std::cout << "Enter in the vinyl price:";
    std::cin >> inputPrice;
    std::cin.ignore();

    Vinyl temp(vinylNameInput, artistInputName, inputPrice);
    inventory.push_back(temp);
}

void Collection::removeVinyl()
{
    std::string target;
    std::cout << "What is the name of the Vinyl you want to remove?:";
    std::getline(std::cin, target);

    std::cout << std::endl;
    for(int i = 0; i < inventory.size();i++)
    {
        if(inventory.at(i).getVinylName() == target)
        {
            inventory.erase(inventory.begin() + i);
            std::cout << target << " successfully removed!\n";
            return;
        }
    }
}

void Collection::displayCollection()
{
    std::cout << "HERE ARE YOUR CURRENT VINYLS:\n";
    for(int i = 0; i < inventory.size();i++)
    {
        std::cout << "Vinyl" << i << ": " <<
            inventory.at(i).getVinylName() << "Artist:" <<
            inventory.at(i).getArtistName() << " Price:" <<
            inventory.at(i).getPrice() <<"\n";
    }
}
std::string Collection::getCollectionName()
{
    return collectionName;
}
int Collection::getNOE()
{
    return inventory.size();
}
