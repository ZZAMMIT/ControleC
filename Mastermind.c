#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Jeu
{
    int combiDevin; // combinaison à deviner
    int nbEssais;
    int nbPartieG; // Nombre de parties gagnées
    int nbPartieP; // Nombre de parties perdues

};



int main()
{

    srand(time(NULL));
    struct Jeu combinaison[4]; //Tableau avec la combinason de 4 chiffres
    struct Jeu nbEssais;
    int i;
    int combiJoueur[4];
    //int combiJoueur;  // Le nombre choisis par le joueur
    int rejouer;



    //Initialisation du nombre d'essais à 10
    nbEssais.nbEssais = 10;


    // Génère aléatoirement la combinaison secrète
    for (i=0 ; i<4 ; i++)
    {
      combinaison[i].combiDevin = (rand()%9+1);

      //Printf de vérification
       printf("%d\n", combinaison[i].combiDevin);
    }


    //On demande au joueur de rentrer ses chiffres
    do
    {
    printf("Veuillez choisir votre premier chiffre : ");
    scanf("%d", &combiJoueur[0]);

    printf("Veuillez choisir votre second chiffre : ");
    scanf("%d", &combiJoueur[1]);

    printf("Veuillez choisir votre troisieme chiffre : ");
    scanf("%d", &combiJoueur[2]);

    printf("Veuillez choisir votre quatrieme chiffre : ");
    scanf("%d", &combiJoueur[3]);

    printf("vous avez choisis : %d - %d - %d - %d \n\n", combiJoueur[0], combiJoueur[1], combiJoueur[2], combiJoueur[3]);




    //Comparaison des chiffres

    if(combiJoueur[0] == combinaison[0].combiDevin)
    {
        printf("\nle chiffre %d est bien place\n\n", combiJoueur[0]);
    }
    else
        if ((combiJoueur[0] == combinaison[1].combiDevin) || (combiJoueur[0] == combinaison[2].combiDevin) || (combiJoueur[0] == combinaison[3].combiDevin))
        {
            printf("le chiffre %d est mal place\n\n", combiJoueur[0]);
        }


        if(combiJoueur[1] == combinaison[1].combiDevin)
    {
        printf("\nle chiffre %d est bien place\n\n", combiJoueur[1]);
    }
    else
        if ((combiJoueur[1] == combinaison[0].combiDevin) || (combiJoueur[1] == combinaison[2].combiDevin) || (combiJoueur[1] == combinaison[3].combiDevin))
        {
            printf("le chiffre %d est mal place\n\n", combiJoueur[1]);
        }


        if(combiJoueur[2] == combinaison[2].combiDevin)
    {
        printf("\nle chiffre %d est bien place\n\n", combiJoueur[2]);
    }
    else
        if ((combiJoueur[2] == combinaison[0].combiDevin) || (combiJoueur[2] == combinaison[1].combiDevin) || (combiJoueur[2] == combinaison[3].combiDevin))
        {
            printf("le chiffre %d est mal place\n\n", combiJoueur[2]);
        }


        if(combiJoueur[3] == combinaison[3].combiDevin)
    {
        printf("\nle chiffre %d est bien place\n\n", combiJoueur[3]);
    }
    else
        if ((combiJoueur[3] == combinaison[0].combiDevin) || (combiJoueur[3] == combinaison[1].combiDevin) || (combiJoueur[3] == combinaison[2].combiDevin))
        {
            printf("le chiffre %d est mal place\n\n", combiJoueur[0]);
        }




        //Si le code joueur est correct
        if (combiJoueur[i] == combinaison[i].combiDevin)
        {
        printf("Vous avez gagne !");
        return 0;
        }

        // Initialisation de nombre d'essais restants
        nbEssais.nbEssais --;

        printf("Il vous rest %d essais\n", nbEssais.nbEssais);

        //Si le joueur n'a plus de d'essais restants
        if (nbEssais.nbEssais == 0)
        {
            printf("Vous avez perdu !");
            return 0;
        }
    }
    while ((nbEssais.nbEssais != 0) || (combiJoueur[i] != combinaison[i].combiDevin));

    // On demande au joueur s'il souhaite rejouer
    printf("Voulez vous commencer une nouvelle partie ? (1 = Oui / 2 = Non\n\nVotre choix : ");
    scanf("%d", rejouer);
    if (rejouer == 1)
    {

    }
}
