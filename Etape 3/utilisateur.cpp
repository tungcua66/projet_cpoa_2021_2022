#include "utilisateur.h"

Utilisateur::Utilisateur()
{
}

Utilisateur::Utilisateur(DonneesConnexion *connexion)
{
    if(connexion->verificationEcriture()){
        std::string name, first_name, phone, adress;
        this->mail = connexion->getMail();
        this->mot_de_passe = connexion->getMot_de_passe();
        this->nom = name;
        this->prenom = first_name;
        this->telephone = phone;
        this->adresse = adress;
    }
}

Utilisateur::Utilisateur(DonneesInscription *inscription)
{
    if(inscription->verificationEcriture()){
        this->mail = inscription->getMail();
        this->mot_de_passe = inscription->getMot_de_passe();
        this->nom = inscription->getNom();
        this->prenom = inscription->getPrenom();
        this->telephone = inscription->getTelepone();
        this->adresse = inscription->getAdresse();
    }
}

std::string Utilisateur::getMail(){
    return this->mail;
}

std::string Utilisateur::getMot_de_passe(){
    return this->mot_de_passe;
}

std::string Utilisateur::getNom(){
    return this->nom;
}
std::string Utilisateur::getPrenom(){
    return this->prenom;
}

std::string Utilisateur::getTelepone(){
    return this->telephone;
}

std::string Utilisateur::getAdresse(){
    return this->adresse;
}
