#include<stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
     char titre[45];
     char description[123];
     char datecheance[455];
     char priorte[21];
} tache;
    tache add[122];
    int nombreadd=0;

void afficheraddition(){
    printf("\addition:\n");
    printf("\n1.ajouter un tache\n2.afficher list taches\n3.modifier un taches\n4.supprimer un tache\n5.feltrer les tache priote\n6.qiutter\n");
}
void ajoutertache(){
 tache tac; 
    printf("donne titre:");
    scanf("%s",tac.titre);
    printf("description :");
    scanf("%s",tac.description);
    printf("date echeance (nn/jj/mm) :");
    scanf("%s",tac.datecheance);
    printf("priorte(high ,low):");
    scanf("%s",tac.priorte);
    add[nombreadd]=tac;
    nombreadd++;

    printf("ajout avec succes.\n");
}
void affichertache(tache tac){
      printf("donne titre: %s\n" , tac.titre);
      printf("description: %s\n" , tac.description);
      printf("datecheance %s\n" , tac.datecheance);
      printf("priorte %s\n" ,tac.priorte);
    }
void afficherlisteadd(){
    for(int i=0 ; i<nombreadd ; i++){
        printf("\ntach:%d:/n",i+1);
        affichertache(add[i]);

    }
}
void modifiertache(){
    int indek;
    printf("entrez l indek de la tache à modifier (1 à %d):", nombreadd);
    scanf("%d", &indek);
    if( indek> 0 && indek <= nombreadd){
        tache*tac = &add[indek - 1];
       
        printf("entre nouveau titre:");
        scanf("¨%[^n]",tac->titre);
        printf(" entre nouveau description :");
         scanf("%s",tac->description);
        printf("entre nouveau de date echeeance (nn/jj/mm):");
         scanf("%s",tac->datecheance);
        printf("entre nouveau de priorte(wigh , low):"); 
         scanf("%s",tac->priorte);
        printf("tache modifier avec susses .\n");
          }
          else{ printf("indek invalide .\n");
          }
          }   
          void supprimertache(){
            int  indek ;
            printf("enter l'indek de la tach à supprimer (1 à %d) : ", nombreadd);
            scanf("%d",&indek);
            if( indek>0 && indek <=nombreadd){
                for(int i=indek -1 ; indek<nombreadd -1 ; i++){
                    add[i] = add[i+1];
     }
     nombreadd-- ;
     printf("tach supprimer avec susses.\n:");

     }else{
        printf("indek invalide .\n :");
     }
     }
     void filtreraddparpriorite(){
    char prior[20];
    printf("Entrez la priorité pour filtrer (high, low): ");
    scanf("%s", prior);  

    for(int i = 0; i < nombreadd; i++) {
        if(strcmp(add[i].priorte, prior) == 0){
            printf("Tâche %d:\n", i + 1);
            affichertache(add[i]);
        }
    }

     }
     int main()
     {
        int choix ;
        do {
        afficheraddition();
            printf("Choisissez une option : ");
            scanf("%d", &choix);

            switch(choix) 
            {
            case 1:

              ajoutertache();  
            break;
                 case 2:
                afficherlisteadd() ;
                
                break;
                 case 3:
                modifiertache();
                
                break;
                 case 4:
                supprimertache();
                break;
                 case 5:
                filtreraddparpriorite();
                break;
                 case 6:
                printf("quitterb la programme");
                break;
                
            
            default:
            printf("choix invalide .\n:");
           
            }
    
     } while (choix!=6);
                
        return 0;

}

