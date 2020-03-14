// FUNCTIONS DEFINITION
#include "Main.h"
#include "Inherited.h"
#include <iostream>
using namespace std;

show::show() {

}
show::show(string TitleName, string DescriptionsDet) {
    Title = TitleName;
    Description = DescriptionsDet;
}

void show::SetDescription(string userDes) {
    Description = userDes;
}
void show::SetTitle(string userTitle) {
    Title = userTitle;
}
string show::GetDescription() {
    return Description;
}
string show::GetTitle() {
    return Title;
}
void show::Details() {
    cout << "Title: " << GetTitle() << endl;
    cout << "Description: " << GetDescription() << endl;
}
TVshow::TVshow(string t, string d, string  ep[20][20]) : show(t, d) {
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; j++)
        {
            epAndSeasons[i][j] = ep[i][j];

        }
    }
}


void Movie::Play() {
    cout << "Opening Credits: " << openingCredits << endl;
}
Movie::Movie(string a, string b, string c):show(a, b){
    openingCredits = c;
}




void TVshow::Play() {
    int season = 0;
    int episode= 0;
    cout << "Season: ";
    cin >> season;
    cout << "episode: ";
    cin >> episode;

}

void TVshow::details() {
    cout << "Title: " << GetTitle() << endl;
    cout << "Description: " << GetDescription() << endl;
    cout << "# of Episodes: " << 5 << endl;
}
void Movie::setOpeningCredits(string a) {
    openingCredits = a;
}
string Movie::getOpeningCredits() {
    return openingCredits;
}
