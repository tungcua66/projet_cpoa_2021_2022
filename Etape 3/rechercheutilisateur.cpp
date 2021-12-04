#include "rechercheutilisateur.h"

RechercheUtilisateur::RechercheUtilisateur()
{
}

Utilisateur RechercheUtilisateur::rechercheUtilisateur(DonneesConnexion *connexion){
    Utilisateur newUser(connexion);
    this->utilisateur =newUser;
    return this->utilisateur;
}
