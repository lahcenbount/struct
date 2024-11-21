#include<stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
     char rue[45];
     char ville[45];
     char codepostal[45];
} adresse;

typedef struct 
{
char nom[25];
int age;
adresse adr;
} personne;

personne personnes[100];

personne creerpersonne()
{
    personne p;

    printf("tape le  nome:");
    scanf("%s",p.nom);
    printf("age:");
    scanf("%d", &p.age);
    printf("ville:");
    scanf("%s",p.adr.ville );
    printf("tape rue:");
    scanf("%s",p.adr.rue);
    printf(" donne Code Postal: "); 
    scanf("%s",p.adr.codepostal);

    return p;
}

void afficherpersonne(personne p)
{
    printf("Nom: %s\n", p.nom);
    printf("Âge: %d\n", p.age); 
    printf("Adresse: %s, %s, %s\n", p.adr.rue, p.adr.ville, p.adr.codepostal);

}
void metterajourpersonne(personne *p)
 { 
    printf("Nouveau nom: ");
 scanf("%s", p->nom);
  printf("Nouvel âge: "); scanf("%d", &p->age);
   printf("Nouvelle ville: "); 
   
   scanf("%s", p->adr.ville); 
   printf("Nouvelle rue: ");
   
 scanf("%s", p->adr.rue); 
 printf("Nouveau code postal: ");
  scanf("%s", p->adr.codepostal);
 }

    







int main() {
    int n=0 , choix , index;
    while (1) {
        printf("\n1. creer une personne\n2. affichr les personnes\n3.suppremir un personne\n4.enter l'index de la personne metter a jour (1 à %d)\n5.quitter\n ");
        printf("choisissez un option :  ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                personnes[n] = creerpersonne();
                n++;
                break;
            case 2:
                for ( int i =0 ;i<n ;i++) {
                    // printf("----------------------------------------\n");
                    printf("Personne %d:\n", i + 1);
                    afficherpersonne(personnes[i]);
                    // printf("----------------------------------------\n\n");
                }
                break;
                case 3:
                scanf("%d", &index);
                if (index >= 1 && index <= n){
                index--;
    

            for (int i = index ; i < n - 1; i++){
                personnes[i] =personnes[i + 1];
            }
           n--;
        printf("Personne supprimee avec succes");
    
    }else 
    {
          printf("Nume invalide . \n");
    }

                
        
                break;
                printf("Quitter le programme.\n");
            default:
            printf("Choix invalide.\n");
                break;
                case 4:
                scanf("%d", &index);
                 if (index > 0 && index <= n){
                 metterajourpersonne(&personnes[index - 1]);
                 (&personnes[index - 1]);
                } else{
                    printf("index valid");
                }
                case 5:
                printf("quitter.\n");
            } 

    }
    return 0;
}