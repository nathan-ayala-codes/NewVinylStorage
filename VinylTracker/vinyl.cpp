#include "vinyl.h"

Vinyl::Vinyl()
{
    vinylName = "ERROR";
    artist = "ERROR";
}

Vinyl::Vinyl(std::string name, std::string artistName)
{
    vinylName = name;
    artist = artistName;
}

Vinyl::Vinyl(std::string name, std::string artistName, double vinylPrice)
{
    vinylName = name;
    artist = artistName;
    price = vinylPrice;
}

std::string Vinyl::getVinylName()
{
    return vinylName;
}

std::string Vinyl::getArtistName()
{
    return artist;
}

double Vinyl::getPrice()
{
    return price;
}



