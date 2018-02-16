#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

#include "casino.h"
#include "jeu.h"
#include "joueur.h"

using namespace std;

int main()
{
    srand(time(NULL));

    string choixJeu;
    int miseJoueur;
    int i;
    int newNbJetons;

    //Les jeux sont stockés dans un vecteur
    vector<string>Jeux;

    Jeux.push_back("Roulette");
    Jeux.push_back("Craps");
    Jeux.push_back("Black Jack");

    //Le joueur choisit un jeu dans la liste
    do
    {
        cout << "veuillez choisir un jeu :" << endl << endl;
        for(i=0; i<Jeux.size(); i++)
        {
            cout << Jeux[i] << endl;
        }
        cout << " " << endl;
        cin >> choixJeu;
    }
    while (choixJeu != Jeux.front()); //Vérification de la premiere valeur seulement  !!!!!!! à retraiter !!!!!!!!



    // Le joueur doit définir sa mise dans la mite de ses jetons
    do
    {
        cout << "votre mise ?" << endl;
        cin >> miseJoueur;
    }
    while(miseJoueur > Joueur().nbJetons);

    //Jouer une partie (une nouvelle partie)
    bool partieGagnee = true;   //Le joueur gagne toujours
    bool rejouer = 0;

    //Proba a 33%  !!!!!!! à retraiter !!!!!!!!
    proba = rand()%33;

    while(partieGagnee)
    {
        //Additionner la mise au nomnre de jetons
        newNbJetons = (Joueur().nbJetons+miseJoueur);
        cout << "Votre avez " << newNbJetons << " jetons" << endl;

        //Proposer au joueur une autre partie
        cout << "Voulez-vous rejouer une autre partie ?" << endl << "0 pour non" << endl << "1 pour oui" << endl;
        cin >> rejouer;
        if (rejouer)
        {
            do
            {
                cout << "votre mise ?" << endl;
                cin >> miseJoueur;
            }
            while(miseJoueur > Joueur().nbJetons);
        }
        else
        {
            cout << "La partie est terminee, vous avez: " << newNbJetons << "jetons" << endl;
        }

    }
//    else
//    {
        //Soustraire la mise au nomnre de jetons
        newNbJetons = (Joueur().nbJetons-miseJoueur);
        cout << "Vous avez " << newNbJetons << " jetons" << endl;

        //Proposer au joueur une autre partie
         cout << "Voulez-vous rejouer une autre partie ?" << endl << "0 pour non" << endl << "1 pour oui" << endl;
        cin >> rejouer;
        if (rejouer)
        {
            do
            {
                cout << "votre mise ?" << endl;
                cin >> miseJoueur;
            }
            while(miseJoueur > Joueur().nbJetons);
        }
        else
        {
            cout << "La partie est terminee !" << endl;
        }
 //   }

    //Stocker le nom et le nombre de jetons du joueur dans fichier
    fstream file;
    string ligneLue;

    file.open("casino.txt", fstream::out | fstream::in);

    file << "Joueur 1" << endl << 'newNbJetons' << endl;
    file.clear();
    getline(file, ligneLue);

    file.close();




    return 0;
}
