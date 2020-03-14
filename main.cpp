// MAIN FUNCTION
#include <iostream>
#include <string>
#include "Main.h"
#include "Inherited.h"

using namespace std;
void call(show s) {
    s.Details();
    s.Play();
}
void call(Movie M) {
    M.Details();
    M.Play();
}
void call(TVshow T) {
    T.Details();
    T.Play();
}


int main() {
    string answer;
    int ans1;
    string Title;
    string Description;
    string c;
    string ep[20][20];


    do
    {
        cout << "Press 1 for an instance of Show" << endl;
        cout << "press 2 for an instance of Movie" << endl;
        cout << "Press 3 for an instance of TV Show" << endl;
        cout << "Press 4 for an instance of a Movie declared as Show" << endl;
        cout << "Press 5 for an instance of a TV Show declared as a Show" << endl;
        cin >> ans1;
        if (ans1 == 1) {
            show *s = new show();
            cout << "Enter show title: ";
            cin >> Title;
            s->SetTitle(Title);

            cout << "Enter show Description: " ;
            cin >> Description;
            s->SetDescription(Description);
            call(*s);
            delete s;
        }
        else if (ans1 == 2) {
            Movie *M = new  Movie(Title, Description, c);
            cout << "Movie Title: ";
            cin >> Title;
            M->SetTitle(Title);

            cout << "Show Description: ";
            getline(cin,Description);
            M->SetDescription(Description);

            cout << "Movie Opening Credits: ";
            cin >> c;
            M->setOpeningCredits(c);

            call(*M);
            delete M;
        }
        else if (ans1 == 3) {
            TVshow *T = new TVshow(Title, Description, ep);
            cout << "TV show title: ";
            cin >> Title;
            T->SetTitle(Title);
            cout << "Show Description: ";
            getline(cin,Description);
            T->SetDescription(Description);
            call(*T);
            delete T;
        }
        else if (ans1 == 4) {
            show* movsho = new Movie(Title, Description, c);
            cout << "Enter movie title: ";
            cin >> Title;
            movsho->SetTitle(Title);

            cout << "Enter movie description: ";
            getline(cin,Description);
            movsho->SetDescription(Description);
            call(*movsho);
            delete movsho;
        }
        else if (ans1 == 5) {
            show *tvs = new TVshow(Title, Description, ep);
            cout << "Enter Tv Show title: ";
            cin >> Title;
            tvs->SetTitle(Title);
            cout << "Enter show description: ";
            getline(cin,Description);
            tvs->SetDescription(Description);

            call(*tvs);
            delete tvs;
        }
        else {
            cout << "Invalid input." << endl;
        }
        cout << endl;
        cout << "Do you wish to contine? (yes or no)" << endl;
        cin >> answer;
    } while (answer == "yes" || answer == "Yes");

    return 0;
}
