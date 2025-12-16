#ifndef VINYL_H
#define VINYL_H
#include <string>
#include <vector>

class Vinyl
{
public:
    Vinyl();
private:
    std::string vinylName, artist;
    double price;
    int month, day, year;

};

#endif // VINYL_H
