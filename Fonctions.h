/* Ce fichier contient la d�finition des diverses fonctions r�alisant les
op�rations de chaque option du Menu*/


#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include <string>
#include <iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>




/* FONCTION QUI PERMET DENREGISTRER*/

void enregistre(std::vector<int>&tableau)
{
    std::ofstream ecrire("-------------- ");      /* A ce niveau, il faut remplacer le "-----" par le chemin d'acc�s complet
du fichier dans lequel on veut enr�gistrer le tableau. Si on d�sire le mettre dans le r�pertoire courant, c'est �
dire le r�p�rtoire o� se situe le fichier, il suffira de mettre juste le nom qu'on voudrait donner au fichier. */


if(ecrire)
    {       ecrire<<"TABLEAU: "<<std::endl;
    unsigned int i;
       for(i=1;i<tableau.size();i++ )
           ecrire<< tableau.at(i)<<std::endl;
      ecrire.close();
       std::cerr<<"Le fichier a ete enregistrer avec succes!."<<std::endl;
       std::cerr<<"Vous retrouverez lenregistrement dans le fichier nomme : fichier du tableau"<<std::endl;


 }
else
    std:: cerr<<"ERREUR:un probleme a ete rencontre au cours de l'ouverture du fichier"<<std::endl;


}


/* A la fin de l'�x�cution,le fichier sera cr�� s'il n'existait pas ,et son contenu sera �cresser s'il existait*/
// Il existe un moyen de completer le contenu du fichier au lieu de l'�creser en utilisant ios::app ( app pour append)








/*FONCTION QUI PERMET DAFFICHER*/

void afficher(std::vector<int>&tableau )
{ unsigned int i;
    for(i=1;i<tableau.size();i++ )
    {std::cout<<"Element n:"<<i<<"= "<< tableau.at(i)<<std::endl;
        std::cout<<std::endl;}
}





/*FONCTION QUI PERMET DAJOUTER*/

void ajouter(std::vector<int>&tableau ){
      int valeur;
    std::cout<<"_Quelle valeur voudriez vous ajouter au tableau"<<std::endl;
    std::cin>>valeur;
                                                                 // On ajoute la valeur et on veille � ce que le tableau soit toujours
                                                                 //tri�


        tableau.push_back(valeur);
         int i;
        for(i=tableau.size()-1 ; i>=1; i=i-1)
        { int inter;
        if (tableau.at(i)< tableau.at(i-1))
            {
            inter=tableau.at(i);
            tableau.at(i)=tableau.at(i-1);
            tableau.at(i-1)=inter;

            }

        }




    std::cout<<"_valeur ajoute avec succes...!"<<std::endl;
    std::cout<<"_Voici le tableau apres l'ajout"<< std::endl;
   afficher(tableau );


}









/* FONCTION QUI PERMET DE SUPPRIMER*/ // On supprime et on ne laisse pas de trou dans le tableau

void supprimer(std::vector<int>&tableau){



    int i;
    std::cout<<"_Entrez la position de lelement que vous voudriez supprimer"<<std::endl;

    std::cin>>i;
     tableau.erase(tableau.begin()+i-1);

    std::cout<<"_Element supprime avec succes...!"<< std::endl;
     std::cout<<"_Voici le tableau apres la suppression"<< std::endl;
    afficher(tableau );




}




/* FONCTION QUI PERMET DE LIRE*/
void lire()
{
    std::ifstream lecture( "---------------- "); /*Ici il faut faire la m�me chose qu'au niveau de la fonction
    qui permet d'�crire concernant les -----. Ici on doit mettre le chemin d'acc�s vers le fichier qui � �t� enr�gistr�*/
    if(lecture)
    {
        std::string conteneur;
        while(getline(lecture,conteneur))
        {
            std::cout<<conteneur<<std::endl;
        }

    lecture.close();
    }
    else
        std::cerr<<"ERREUR:un probleme a ete rencontre au cours de l'ouverture du fichier"<<std::endl;
}




































#endif // FONCTIONS_H_INCLUDED
