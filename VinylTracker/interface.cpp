#include "interface.h"


void Interface::homePage()
{
    bool running = true;

    while (running)
    {
        std::cout << "1. View collections\n";
        std::cout << "2. Create collection\n";
        std::cout << "0. Exit\n";

        int choice;
        std::cin >> choice;

        if (choice == 1)
        {
            std::cin.ignore();
            viewCollections();

        }
        else if(choice == 2)
        {
            std::cin.ignore();
            createCollection();
        }
        else if (choice == 0)
        {
            running = false;
        }
    }
}

void Interface::createCollection()
{
    std::string collectionName;
    std::cout << "Enter in a name for your collection:";
    std::getline(std::cin, collectionName);
    Collection* temp = new Collection(collectionName);

    if(temp)
        std::cout << "New Collection successfully made!\n";
    else
    {
        std::cerr << "ERROR: COLLECTION NOT MADE!\n";
        return;
    }
    Collections.push_back(temp);

}

void Interface::viewCollections()
{
    bool viewingCollections = true;
    while(viewingCollections)
    {
    std::cout << "    YOUR COLLECTIONS    \n";
    for(int i = 0; i < Collections.size();i++)
    {
        std::cout << "Collection # " << i + 1 << ":" <<
        Collections.at(i)->getCollectionName() <<
        "   #Vinyls Inside: " << Collections.at(i)->getNOE()
        << "\n";
    }
    int choice;
    std::cout << "Enter Vinyl# to edit or x to return:";
    std::cin >> choice;
    if(choice != 'x')
        editCollection(Collections.at(choice));
    else
        viewingCollections = false;
    }
}

void Interface::editCollection(Collection* other)
{
    bool editing = true;

    while (editing)
    {
        std::cout << "Editing: " << other->getCollectionName() << "\n";
        std::cout << "1. Add vinyl\n";
        std::cout << "2. Remove vinyl\n";
        std::cout << "3. Display vinyls\n";
        std::cout << "0. Back\n";

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            other->addVinyl();
            break;

        case 2:
            other->removeVinyl();
            break;

        case 3:
            other->displayCollection();
            break;

        case 0:
            editing = false;
            break;
        }
    }
}


