#include <iostream>
#include "vinyl.h"
#include "collection.h"

int main()
{
    std::string collectionName;
    std::cout << "Enter in a name for your collection:";
    std::getline(std::cin, collectionName);

    Collection d1(collectionName);
    d1.addVinyl();
    d1.addVinyl();
    d1.displayCollection();
    d1.removeVinyl();
    d1.displayCollection();
    return 0;
}
