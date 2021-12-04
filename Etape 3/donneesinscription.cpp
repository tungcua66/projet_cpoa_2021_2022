#include "donneesinscription.h"

DonneesInscription::DonneesInscription()
{

}

DonneesInscription::DonneesInscription(std::string *mail,std::string *mot_de_passe,std::string *nom,std::string *prenom,std::string *telephone,std::string *adresse){
    VerificationDonnees(mail, mot_de_passe);
    this->nom=nom;
    this->prenom = prenom;
    this->telephone = telephone;
    this->adresse = adresse;
}

std::string DonneesInscription::getNom(){
    return *this->nom;
}

std::string DonneesInscription::getPrenom(){
    return *this->prenom;
}

std::string DonneesInscription::getTelepone(){
    return *this->telephone;
}

std::string DonneesInscription::getAdresse(){
    return *this->adresse;
}
