#include "verificationdonnees.h"

VerificationDonnees::VerificationDonnees(){
}

VerificationDonnees::VerificationDonnees(std::string *mail, std::string *mot_de_passe)
{
    this->mail=mail;
    this->mot_de_passe=mot_de_passe;
}

std::string VerificationDonnees::getMail(){
    return *this->mail;
}

std::string VerificationDonnees::getMot_de_passe(){
    return *this->mot_de_passe;
}

bool VerificationDonnees::verificationEcriture(){
    return true;
}
