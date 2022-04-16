#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main (){

    int n,i,j,k,tnom,tprenom, temail, tadresse , tnCompte, tsolde,choix;
    float interaction,check;
    compte *t; //tableau de structure
    char Search,find;

    printf ("Saisir nombre de client : ");
    scanf ("%d", &n);

    t = (compte *) malloc (n*sizeof(compte)); //On alloue de la mémoire pour le tableau

    printf ("Saisir taille du nom le plus grand: "); //déclaration taille
    scanf ("%s", &tnom);

    printf ("Saisir taille du prenom le plus grand : "); //déclaration taille
    scanf ("%s", &tprenom);

    printf ("Saisir taille du mail le plus grand : "); //déclaration taille
    scanf ("%s", &temail);

    fflush(stdin);

    printf ("Saisir taille de l'adresse le plus grand : "); //déclaration taille
    scanf ("%s", &tprenom);



    for (i=0; i<n; i++){
            t[i].nom = (char *) malloc(tnom*sizeof(char)); //réservation taille
            t[i].prenom = (char *) malloc(tprenom*sizeof(char)); //réservation taille
            t[i].email = (char *) malloc(temail*sizeof(char)); //réservation taille
            t[i].adresse = (char *) malloc(tadresse*sizeof(char)); //réservation taille


            printf ("Saisir nom :\t");
            scanf ("%s", &t[i].nom); //pas de & car pointeur

            printf ("Saisir prenom :\t");
            scanf ("%s", &t[i].prenom); //pas de & car pointeur

            printf ("Saisir email :\t");
            scanf ("%s", &t[i].email);

            printf ("Saisir adresse :\t");
            scanf ("%s", &t[i].adresse);

            printf ("Saisir nombre de compte :\t");
            scanf ("%d", &t[i].nCompte);

            for(j=0; j<t[i].nCompte ; j++){
            printf ("Saisir Id de compte numero %d :\t", j);
            scanf ("%d", &t[i].compteAss[j]);
            }

            printf ("Saisir solde :\t");
            scanf ("%2f", &t[i].solde);

            printf ("\n");

    }

    for (i=0; i<n; i++){




            printf("nom :%s\n prenom :%s\n email :%s\n adresse :%s\n numero du compte %d\n solde :%2f\n" , &t[i].nom, &t[i].prenom, &t[i].email, &t[i].adresse , t[i].nCompte , t[i].solde );
                  if(t[i].solde < 0){
                printf(" Monsieur madame %s, les uissiers vont débarquer chez vous", t[i].nom);
        }
            for(j=0; j<5 ; j++){
            printf ("Id de compte numero %d : %d \n",j, t[i].compteAss[j]);
            }
    }


    printf ("Saississez le nom de famille du client voulu ");
    scanf ("%s", &Search);

     for (k=0; k<n; k++){
        if(t[k].nom == Search){
                find = Search;
                printf("nom : %s \n prenom :%s\n email :%s\n adresse :%s\n numero du compte %d\n solde :%2f\n" , &t[k].nom, &t[k].prenom, &t[k].email, &t[k].adresse , t[k].nCompte , t[k].solde );
            printf ("Voulez vous effectuez un versement ou un retrait ? \n ");
      printf("1 - versement \n");
      printf("2 - retrait \n");
      scanf ("%d", &choix);

      if (choix ==1){
        printf(" Vous avez choisi l'option versement \n");
        printf (" Veuillez choisir le montant a ajouter ");
         scanf ("%2f", &interaction);
         t[k].solde = t[k].solde + interaction;
         printf(" Votre solde total est de %2f ", t[k].solde );
      }
      else if (choix = 2){
             printf(" Vous avez choisi l'option retrait \n");
        printf (" Veuillez choisir le montant a retirer");
         scanf ("%2f", &interaction);
         t[k].solde = t[k].solde - interaction;
         printf(" Votre solde total est de %2f ",  t[k].solde);
      }
        }
     }


    free(t); //libération memoire

    return 0;
}

