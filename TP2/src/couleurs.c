//biblioteques
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Couleur
{
    int R;
    int G;
    int B;
    int A;
};


int main() 
{   
    srand( time( NULL ) );

    int n;
    int R , G , B , A ;
    int R2 , G2 , B2 , A2 ;

    int taille = 10;

    struct Couleur couleur;

    
    int nbdistinct =0;
    int dejavu = 0;
    
    int intamax = 256;
    int intmin = 0;
    int total = 0;

    struct Couleur Couleurs[taille];

    struct Couleur Couleursdistinct[taille];

    int Nbocur[taille];
    

   

     
    for (int i = 0; i <= (taille-1); i++) 
    {
        couleur.R = rand() % intamax;
        couleur.G = rand() % intamax;
        couleur.B = rand() % intamax;
        couleur.A = rand() % intamax;

        Couleurs[i] = couleur; 

    }