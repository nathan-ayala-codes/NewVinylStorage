#ifndef INTERFACE_H
#define INTERFACE_H
#include "vinyl.h"
#include "collection.h"

class Interface
{
public:

    void homePage();
    void createCollection();
    void viewCollections();
    void editCollection(Collection* other);

private:
    std::vector<Collection*> Collections;
};

#endif // INTERFACE_H
