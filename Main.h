#ifndef MAIN_H
#define MAIN_H
// MIAN h file
#include <string>
#include <iostream>
using namespace std;

class show
{
public:
    show();							// Deafault constructor
    show(string, string);			// overloaded constructor

    virtual void Play() {};
    void Details();

    void SetTitle(string);
    void SetDescription(string);

    string GetTitle();
    string GetDescription();

private:
    string Title;
    string Description;

};


#endif //
