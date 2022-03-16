#include <iostream>
#include"Fonctions.h"                 // Nous avons inclure le fichier fonctions qui contient la définition des 5 fonctions
#include<vector>
using namespace std;
vector<int> tableau(1);               // création du tableau qui sera initialisé à 0 puisqu'il s'agit d'une variable globale




int main()
{


     bool recommencer=1;               // Ce boolean sera utiliser pour l'implémentation de l'option quitté


    begening:                         // Nous avons appelé la portion qui va suivre begening


           int menu;                 // Variable permettant de récupérer le choix de l'utilisateur

                                    // Affichage du menu

       cout<<"_______________________________________________________________________"<<endl;

        cout<<endl; cout<<endl;

          cout<<"Veullez selectionner dans le menu ci dessous "<<endl;
          cout<<"(Entrez le chiffre correspondant au choix)"<<endl;
           cout<<endl;
          cout<<"1- Ajouter un element au tableau."<<endl;
           cout<<endl;
          cout<<"2-Afficher le tableau."<<endl;
           cout<<endl;
          cout<<"3-Supprimer un element du tableau"<<endl;
           cout<<endl;
          cout<<"4-Enregistrer le taleau dans un fichier texte."<<endl;
           cout<<endl;
          cout<<"5-Ouvrir et afficher le fichier texte contenant le tableau"<<endl;
           cout<<endl;
          cout<<"6-QUITTER"<<endl;
            cout<<endl;
           cout<<"_______________________________________________________________________"<<endl;
            cout<<endl; cout<<endl;



           cin>>menu;                     // Réception du choix de l'utilisateur






          switch(menu)                   // Nous avons choisit l'instruction switch pour gérer le choix de l'utilisateur
          {
          case 1
              :ajouter(tableau );        // S'il choisit 1 on appelle la fonction ajouter en lui passant en argument le tableau


              break;                     //puis nous quittons le switch
          case 2:
               afficher(tableau );       //S'il choisit 2 on appelle la fonction afficher en lui passant en argument le tableau
                                         // il affiche le tableau

              break;                     // puis nous quittons le switch

          case 3:
              supprimer(tableau);         //S'il choisit 3 on appelle la fonction: supprimer


              break;                     // puis nous quittons le switch
          case 4:
              enregistre(tableau);        //S'il  choisit 4 on appelle la fonction: enregistre


              break;                     // puis nous quittons le switch
          case 5:
              lire();                     //S'il choisit 5 on appelle la fonction: lire


              break;                    // puis nous quittons le switch
          case 6:
              recommencer=0;             // S'il choisit 6, on met le bool recommencer à 0

              break;                     // puis nous quittons le switch

          default:                        // S'il choisit une option qui ne figure pas dans le menu:

              cout<<"Votre choix n'existe pas."<<endl;
              cout<<"Veuillez refaire le choix en veilant a choisir un chiffre entre 1 et 6"<<endl;



          }

// Portion permettant la gestion de la répetition lorsque l'utilisateur ne choisit pas de quittter

          if(recommencer)              // Si le bool recommencer est à 1, ce qui inclut que l'option quitté n'a pas été choisis
          {

              goto begening;           // Le code recommence depuis la partie que nous avons appeller begening .
          }
          else
              exit(0);                 // Si non on met fin au processus et on ferme






    return 0;
}
