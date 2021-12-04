#include "creationutilisateur.h"

CreationUtilisateur::CreationUtilisateur()
{
}

Utilisateur CreationUtilisateur::creationUtilisateur(DonneesInscription *inscription){
    Utilisateur newUser(inscription);
    this->utilisateur =newUser;
    return this->utilisateur;
}
