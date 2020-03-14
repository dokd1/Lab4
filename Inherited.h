#ifndef INHERITED_H
#define INHERITED_H
// INHERITED CLASS
#include "Main.h"
#include <iostream>
class TVshow :public show {
public:
    TVshow() {};
    TVshow(string t, string d, string  ep[20][20]);
    void Play() override;
    void details();
private:
    string epAndSeasons[20][20];

};

class Movie :public show {
public:
    Movie(string, string, string);
    string getOpeningCredits();
    void setOpeningCredits(string a);
    void Play() override;
private:
    string openingCredits;

};
#endif // DEBUG
