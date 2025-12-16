#ifndef COLLECTION_H
#define COLLECTION_H
#include "vinyl.h"

class Collection
{
public:
    Collection();
    Collection(std::string name);
    void addVinyl();
    void removeVinyl();
    void displayCollection();


private:
    std::vector<Vinyl> inventory[50];
    std::string collectionName;
};

#endif // COLLECTION_H
