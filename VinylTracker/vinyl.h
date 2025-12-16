#ifndef VINYL_H
#define VINYL_H
#include <string>
#include <vector>
#include <iostream>

class Vinyl
{
public:
    Vinyl();
    Vinyl(std::string name, std::string artistName);
    Vinyl(std::string name, std::string artistName, double vinylPrice);
    std::string getVinylName();
    std::string getArtistName();
    double getPrice();
private:
    std::string vinylName, artist;
    double price;
};

#endif // VINYL_H
